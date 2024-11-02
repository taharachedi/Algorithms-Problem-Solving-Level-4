#include <iostream>

using namespace std;

short Read_Year() {

    short Year = 0;

    cout << "Please Enter A Year : ";
    cin >> Year;

    return Year;
}


bool is_Leap_Year(short Year) {

    if (Year % 400 == 0) // Leap Year is Divisible By 400
        return true;

    else if (Year % 100 == 0) // Not A Leap Year if Divisible By 100 But Not By 400
        return false;

    else if (Year % 4 == 0) // Leap Year if Divisible By 4 But Not By 100
        return true;

    else                   // All Other Years Are Not Leap Year
        return false;
}


short main()
{
    system("color f3");

    short Year = Read_Year();

    if (is_Leap_Year(Year))
        cout << "\nYes, Year [" << Year << "] is A Leap Year!";
    else
        cout << "\nNo, Year [" << Year << "] is Not A Leap Year!";

    system("pause>0");
    return 0;
}