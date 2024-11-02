#include <iostream>
using namespace std;

short Read_Year() {

    short Year;

    cout << "\nPlease Enter A Year : ";
    cin >> Year;

    return Year;
}

short Read_Month() {

    short Month;

    cout << "\nPlease Enter A Month : ";
    cin >> Month;

    return Month;
}


short Read_Day() {

    short Day;

    cout << "\nPlease Enter A Day : ";
    cin >> Day;

    return Day;
}


bool is_Leap_Year(short Year) {

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}


short Num_Of_Days_In_Month(short Month, short Year) {

    short Arr_Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Arr_Days[Month - 1];
}

short Number_Of_Days_From_The_beginning_Of_Year(short Day, short Month, short Year) {

    short Total_Days = 0;
    
    for (short i = 1; i <= Month - 1; i++)
    {
        Total_Days += Num_Of_Days_In_Month(i, Year);
    }

    Total_Days += Day;

    return Total_Days; 
}


int main()
{
    system("color f3");

    short Day = Read_Day();
    short Month = Read_Month();
    short Year = Read_Year();


    cout << "\nNumber Of Days From The Beginning Of The Year is : " 
        << Number_Of_Days_From_The_beginning_Of_Year(Day, Month, Year);

    system("pause>0");
    return 0;
}