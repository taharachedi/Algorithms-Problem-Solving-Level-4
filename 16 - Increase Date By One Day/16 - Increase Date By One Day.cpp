#include <iostream>
using namespace std;

struct stDate {
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


bool is_Leap_Year(short Year) {

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

short Num_Of_Days_In_A_Month(short Month, short Year) {

    short Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Days[Month - 1];
}


bool is_Last_Day_In_Month(stDate Date) {

    return Date.Day == Num_Of_Days_In_A_Month(Date.Month, Date.Year);
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

int main()
{
    system("color f3");

    stDate Date = Read_Full_Date();
    Date = Increase_Date_By_One_Day(Date);

    cout << "\nDate After Adding One Day : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    system("pause>0");
    return 0;
}