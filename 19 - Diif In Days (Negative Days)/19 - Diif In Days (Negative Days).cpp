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

short Num_of_Days_In_Month(short Month, short Year) {

    short Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Days[Month - 1];
}


bool is_Last_Day_In_Month(stDate Date) {

    return Date.Day == Num_of_Days_In_Month(Date.Month, Date.Year);
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


bool Is_Date1_Before_Date2(stDate Date1,stDate Date2) {

    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true :
            ((Date1.Month == Date2.Month) ? Date1.Day < Date2.Day : false)) : false);
}


void Swap_Dates(stDate& Date1, stDate& Date2) {

    stDate Temp_Date;

    Temp_Date.Day = Date1.Day;
    Temp_Date.Month = Date1.Month;
    Temp_Date.Year = Date1.Year;

    Date1.Day = Date2.Day;
    Date1.Month = Date2.Month;
    Date1.Year = Date2.Year;

    Date2.Day = Temp_Date.Day;
    Date2.Month = Temp_Date.Month;
    Date2.Year = Temp_Date.Year;
}


short Get_Difference_In_Days(stDate Date1, stDate Date2, bool Include_End_Day = false) {

    short Diff = 0;
    short Swap_Flag_Value = 1;

    if (!Is_Date1_Before_Date2(Date1,Date2))
    {
        Swap_Dates(Date1, Date2);
        Swap_Flag_Value = -1;
    }

    while (Is_Date1_Before_Date2(Date1, Date2)) {

        Diff++;
        Date1 = Increase_Date_By_One_Day(Date1);
    }

    return Include_End_Day ? ++Diff * Swap_Flag_Value : Diff * Swap_Flag_Value; 
}


int main()
{
    system("color f3");

    stDate Date1 = Read_Full_Date();
    stDate Date2 = Read_Full_Date();

    cout << "\nDifference is : " << Get_Difference_In_Days(Date1, Date2) << " Day(s).";
    cout << "\nDifference (Including End Day) is : " << Get_Difference_In_Days(Date1, Date2, true) << " Day(s).";


    system("pause>0");
    return 0;
}
