#include <iostream>
using namespace std;

short Read_Year() {

    short Year = 0;

    cout << "Please Enter A Year To Check : ";
    cin >> Year;

    return Year;
}


short Read_Month() {

    short Month = 0;
    
    do
    {
        cout << "\nPlease Enter A Month To Check : ";
        cin >> Month;

    } while (Month < 1 || Month > 12);


    return Month;
}


bool is_Leap_Year(short Year) {

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}


short Num_Of_Days_In_Month(short Month,short Year) {

    if (Month == 2)
    {
        return is_Leap_Year(Year) ? 29 : 28;
    }

    short Arr_31_Day[7] = { 1,3,5,7,8,10,12 };

    for (short i = 0; i < 7; i++) 
    {
        if (Arr_31_Day[i] == Month)
            return 31;
    }

    return 30;
}


short Num_Of_Hours_In_Month(short Month, short Year) {

    return Num_Of_Days_In_Month(Month, Year) * 24;
}

int Num_Of_Minutes_In_Month(short Month, short Year) {

    return Num_Of_Hours_In_Month(Month, Year) * 60;
}

int Num_Of_Seconds_In_Month(short Month, short Year) {

    return Num_Of_Minutes_In_Month(Month, Year) * 60;
}


int main()
{
    system("color f3");

    short Year = Read_Year();
    short Month = Read_Month();

    cout << "\n\n------------------------------------------\n";
    
    cout << "\nNumber Of Days    In Month [" << Month << "] : " << Num_Of_Days_In_Month(Month, Year);
    cout << "\nNumber Of Hours   In Month [" << Month << "] : " << Num_Of_Hours_In_Month(Month, Year);
    cout << "\nNumber Of Minutes In Month [" << Month << "] : " << Num_Of_Minutes_In_Month(Month, Year);
    cout << "\nNumber Of Seconds In Month [" << Month << "] : " << Num_Of_Seconds_In_Month(Month, Year);

    cout << "\n\n------------------------------------------\n";

    system("pause>0");
    return 0;
}