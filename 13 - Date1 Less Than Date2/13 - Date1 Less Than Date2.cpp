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

    cout << "\nPlease Enter A Day : ";
    cin >> Day;

    return Day;
}

short Read_Month() {

    short Month;

    cout << "\nPlease Enter A Month : ";
    cin >> Month;

    return Month;
}

short Read_Year() {

    short Year;

    cout << "\nPlease Enter A Year : ";
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


bool is_Date1_Less_Than_Date2(stDate Date1, stDate Date2) {

    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true :
            ((Date1.Month == Date2.Month) ? Date1.Day < Date2.Day : false) ) : false);
}



int main()
{
    system("color f3");

    stDate Date1 = Read_Full_Date();
    stDate Date2 = Read_Full_Date();

    if (is_Date1_Less_Than_Date2(Date1,Date2))
    {
        cout << "\nYes, Date1 is Less Than Date2! ";
    }
    else
    {
        cout << "\No, Date1 is Not Less Than Date2! ";

    }

    system("pause>0");
    return 0;
}
