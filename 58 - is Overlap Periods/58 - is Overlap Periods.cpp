#include <iostream>
using namespace std;

struct stDate {
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


struct stPeriod {
    stDate Start_Date;
    stDate End_Date;
};

stPeriod Read_Period() {
    stPeriod Period;

    cout << "Enter Start Date : \n\n";
    Period.Start_Date = Read_Full_Date();

    cout << "\nEnter End Date : \n\n";
    Period.End_Date = Read_Full_Date();

    return Period;
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

enum enDateCompare{ Before = -1 , Equal = 0 , After = 1 };

enDateCompare Compare_Dates(stDate Date1, stDate Date2) {

    if (is_Date1_Before_Date2(Date1, Date2))
        return enDateCompare::Before;
    if (is_Date1_Equal_Date2(Date1, Date2))
        return enDateCompare::Equal;

    return enDateCompare::After;
}

bool is_Overlap_Periods(stPeriod Period1, stPeriod Period2) {

    if ((Compare_Dates(Period2.End_Date , Period1.Start_Date) == enDateCompare::Before) ||
        (Compare_Dates(Period2.Start_Date , Period1.End_Date) == enDateCompare::After))
        return false;

    else
        return true;
}


int main()
{
    system("color f3");

    cout << "Enter Period 1 : \n";
    stPeriod Period1 = Read_Period();

    cout << "\nEnter Period 2 : \n";
    stPeriod Period2 = Read_Period();
    
    if (is_Overlap_Periods(Period1, Period2))
        cout << "\nYes, Periods Overlap! ";
    else
        cout << "\nNo, Periods do Not Overlap! ";


    system("pause>0"); 
    return 0;
}
