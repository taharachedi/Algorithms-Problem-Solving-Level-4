#include <iostream>

using namespace std;


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


short How_Many_Days_To_Add() {

    short Days;

    cout << "\nHow Many Days To Add?  ";
    cin >> Days;

    return Days;
}


bool is_Leap_Year(short Year) {

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}


short Number_Of_Days_In_A_Month(short Month, short Year) {

    short Num_Of_Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Num_Of_Days[Month - 1];
}



short Days_From_The_Beginning_Of_The_Year(short Day, short Month, short Year) {

    short Total_Days = 0;

    for (short i = 1; i <= Month - 1; i++)
    {
        Total_Days += Number_Of_Days_In_A_Month(i, Year);
    }
    Total_Days += Day;

    return Total_Days;
}


struct stDate {

    short Day;
    short Month;
    short Year;
};


stDate Date_Add_Days(short Days_To_Add,stDate Date) {
 
    short RemainingDay = Days_To_Add + Days_From_The_Beginning_Of_The_Year(Date.Day, Date.Month, Date.Year); 
    short Month_Day = 0;

    Date.Month = 1;

    while (true) {

        Month_Day = Number_Of_Days_In_A_Month(Date.Month, Date.Year);

        if (RemainingDay > Month_Day)
        {
            RemainingDay -= Month_Day;
            Date.Month++;

            if (Date.Month > 12)
            {
                Date.Year++;
                Date.Month = 1;
            }
        }

        else
        {
            Date.Day = RemainingDay;
            break;
        }
    }

    return Date;
}


stDate Read_Date() {

    stDate Date;

    Date.Day = Read_Day();
    Date.Month = Read_Month();
    Date.Year = Read_Year();

    return Date;
}


int main()
{
    system("color f3");

    stDate Date = Read_Date();
    short Days_To_Add = How_Many_Days_To_Add();

    Date = Date_Add_Days(Days_To_Add, Date);

    cout << "\nDate After Adding [" << Days_To_Add << "] days is : "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;


    system("pause>0");
    return 0;
}