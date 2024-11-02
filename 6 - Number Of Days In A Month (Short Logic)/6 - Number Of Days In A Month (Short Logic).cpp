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


int Num_Of_Days_In_A_Month(short Year, short Month) {

    int Num_Of_Day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? ((is_Leap_Year(Year)) ? 29 : 28) : Num_Of_Day[Month - 1];
}


int main()
{
    system("color f3");

    short Year = Read_Year();
    short Month = Read_Month();

    cout << "\nThe Number Of Days In Month [" << Month << "] is : " << Num_Of_Days_In_A_Month(Year, Month);

    system("pause>0");
    return 0;
}