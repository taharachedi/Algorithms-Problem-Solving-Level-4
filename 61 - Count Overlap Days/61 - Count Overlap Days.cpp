#include <iostream>
using namespace std;

struct stDate
{
    short Day;
    short Month;
    short Year;
};

short Read_Day() {
    short Day;
    cout << "Please Enter A Day : ";
    cin >> Day;
    return Day;
}

short Read_Month() {
    short Month;
    cout << "Please Enter A Month : ";
    cin >> Month;
    return Month;
}

short Read_Year() {
    short Year;
    cout << "Please Enter A Year : ";
    cin >> Year;
    return Year;
}

stDate Read_Full_Date() {
    stDate Date;
    Date.Day = Read_Day();
    Date.Month = Read_Month();
    Date.Year = Read_Year();
    return Date;
}

struct stPeriod
{
    stDate Start_Date;
    stDate End_Date;
};

stPeriod Read_Period() {
    stPeriod Period;
    cout << "\nEnter Start Date : \n\n";
    Period.Start_Date = Read_Full_Date();
    cout << "\n\nEnter End Date : \n\n";
    Period.End_Date = Read_Full_Date();
    return Period;
}

bool is_Leap_Year(short Year) {

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

short Num_Of_Days_In_Month(short Month, short Year) {

    short Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Days[Month - 1];
}

bool is_Last_Day_In_Month(stDate Date) {

    return Date.Day == Num_Of_Days_In_Month(Date.Month, Date.Year);
}

bool is_Last_Month_In_Year(short Month) {

    return Month == 12;
}

stDate Increase_Date_By_One_Day(stDate Date) {

    if (is_Last_Day_In_Month(Date))
    {
        if (is_Last_Month_In_Year(Date.Month))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }

    }

    else
    {
        Date.Day++;
    }

    return Date;
}


bool is_Date1_Before_Date2(stDate Date1, stDate Date2) {

    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true :
            ((Date1.Month == Date2.Month) ? Date1.Day < Date2.Day : false)) : false);
}

bool is_Date1_Equal_Date2(stDate Date1, stDate Date2) {

    return ((Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false);
}

bool is_Date1_After_Date2(stDate Date1, stDate Date2) {

    return (!is_Date1_Before_Date2(Date1, Date2) && !is_Date1_Equal_Date2(Date1, Date2));
}


short Get_Difference_In_Days(stDate Date1, stDate Date2, bool IncludeEndDay = false) {

    short Diff = 0;

    while (is_Date1_Before_Date2(Date1, Date2)) {
        Diff++;
        Date1 = Increase_Date_By_One_Day(Date1);
    }

    return IncludeEndDay ? ++Diff : Diff;
}


short Period_Length_In_Days(stPeriod Period, bool IncludeEndDay = false) {

    return Get_Difference_In_Days(Period.Start_Date, Period.End_Date, IncludeEndDay);
}


enum enDateCompare{ Before = -1, Equal = 0 , After = 1};

enDateCompare Compare_Dates(stDate Date1, stDate Date2) {

    if (is_Date1_Before_Date2(Date1, Date2))
        return enDateCompare::Before;
    if (is_Date1_Equal_Date2(Date1, Date2))
        return enDateCompare::Equal;

    return enDateCompare::After;
}


bool is_Overlap_Periods(stPeriod Period1, stPeriod Period2) {

    if (Compare_Dates(Period2.End_Date, Period1.Start_Date) == enDateCompare::Before ||
        Compare_Dates(Period2.Start_Date, Period1.End_Date) == enDateCompare::After)
        return false;
    else
        return true;
}

bool is_Date_In_Period(stDate Date, stPeriod Period) {

    return !(Compare_Dates(Date, Period.Start_Date) == enDateCompare::Before ||
        Compare_Dates(Date, Period.End_Date) == enDateCompare::After);
}


short Count_Overlap_Days(stPeriod Period1, stPeriod Period2) {

    short Period1Length = Period_Length_In_Days(Period1, true);
    short Period2Length = Period_Length_In_Days(Period2, true);

    short OverlapDays = 0;

    if (!is_Overlap_Periods(Period1, Period2))
        return 0;

    if (Period1Length < Period2Length)
    {
        while (is_Date1_Before_Date2(Period1.Start_Date, Period1.End_Date)) {

            if (is_Date_In_Period(Period1.Start_Date,Period2))
                OverlapDays++;
          
            Period1.Start_Date = Increase_Date_By_One_Day(Period1.Start_Date);
        }
    }

    else
    {
        while (is_Date1_Before_Date2(Period2.Start_Date, Period2.End_Date)) {

            if (is_Date_In_Period(Period2.Start_Date, Period1))
                OverlapDays++;

            Period2.Start_Date = Increase_Date_By_One_Day(Period2.Start_Date);
        }
    }

    return OverlapDays;
}


int main()
{
    system("color f3");

    cout << "Enter Period 1 : ";
    stPeriod Period1 = Read_Period();

    cout << "\n\nEnter Period2 : ";
    stPeriod Period2 = Read_Period();

    cout << "\n\nOverlap Days Count is : " << Count_Overlap_Days(Period1, Period2) << endl;

    system("pause>0");
    return 0;
}
