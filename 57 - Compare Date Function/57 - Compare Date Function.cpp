#include <iostream>
using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;
};

short Read_Day() {
    short Day = 0;

    cout << "Please Enter A Day : ";
    cin >> Day;

    return Day;
}

short Read_Month() {
    short Month = 0;

    cout << "Please Enter A Month : ";
    cin >> Month;

    return Month;
}

short Read_Year() {
    short Year = 0;

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
    Before = -1, Equal = 0, After = 1
};


enDateCompare Compare_Dates(stDate Date1, stDate Date2) {

    if (is_Date1_Before_Date2(Date1, Date2))
        return enDateCompare::Before;

    if (is_Date1_Equal_Date2(Date1, Date2))  
        return enDateCompare::Equal;


    return enDateCompare::After;   //This is Faster
}

int main()
{
    system("color f3");

    cout << "Enter Date1 : \n";
    stDate Date1 = Read_Full_Date();

    cout << "\n\nEnter Date2 : \n";
    stDate Date2 = Read_Full_Date();

    cout << "\nCompare Result : " << Compare_Dates(Date1, Date2) << endl;

    system("pause>0");
    return 0;
}
