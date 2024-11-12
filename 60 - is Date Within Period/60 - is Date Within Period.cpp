#include <iostream>
using namespace std;

struct stDate {
    short Year;
    short Month;
    short Day;
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

    cout << "\nEnter Start Date : \n";
    Period.Start_Date = Read_Full_Date();

    cout << "\n\nEnter End Date : \n";
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


enum enDateCompare
{
    Before = -1 , Equal = 0 , After = 1
};

enDateCompare Compare_Dates(stDate Date1, stDate Date2) {

    if (is_Date1_Before_Date2(Date1, Date2))
        return enDateCompare::Before;

    if (is_Date1_Equal_Date2(Date1, Date2))
        return enDateCompare::Equal;

    return enDateCompare::After;
}


bool is_Date_In_Period(stDate Date_To_Check, stPeriod Period) {

    return !(Compare_Dates(Date_To_Check, Period.Start_Date) == enDateCompare::Before ||
        Compare_Dates(Date_To_Check, Period.End_Date) == enDateCompare::After);
}


int main()
{
    system("color f3");

    cout << "Enter Period : \n";
    stPeriod Period = Read_Period();

    cout << "\n\nEnter Date To Check : \n";
    stDate Date_To_Check = Read_Full_Date();

    if (is_Date_In_Period(Date_To_Check, Period))
        cout << "\n\nYes, Date is Within Period! ";
    else
        cout << "\n\nNo, Date is Not Within Period! ";

    system("pause>0");
    return 0;
}
