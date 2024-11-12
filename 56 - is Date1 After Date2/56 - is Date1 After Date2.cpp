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

bool is_Date1_Before_Date2(stDate Date1, stDate Date2) {

    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true :
            ((Date1.Month == Date2.Month) ? Date1.Day < Date2.Day : false)):false);
}

bool is_Date1_Equal_Date2(stDate Date1, stDate Date2) {

    return ((Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false);
}


bool is_Date1_After_Date2(stDate Date1, stDate Date2) {

    return (!is_Date1_Before_Date2(Date1, Date2) && !is_Date1_Equal_Date2(Date1, Date2));
}



int main()
{
    system("color f3");

    cout << "\nEnter Date 1 : \n";
    stDate Date1 = Read_Full_Date();

    cout << "\n\nEnter Date 2 : \n";
    stDate Date2 = Read_Full_Date();


    if (is_Date1_After_Date2(Date1, Date2))
        cout << "\nYes, Date1 is After Date2! ";
    else
        cout << "\nNo, Date1 is Not After Date2! ";


    system("pause>0");
    return 0;
}
