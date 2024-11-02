#include <iostream>

using namespace std;


short Read_Year() {

    short Year = 0;

    cout << "Please Enter A Year To Check : ";
    cin >> Year;

    return Year;    
}


bool is_Leap_Year(short Year) {

    // if Year is Divisible By 4 And Not By 100 Or Just Divisible By 400 
    return ( (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0 ) ); 
}


int main()
{
    system("color f3");

    short Year = Read_Year();

    if (is_Leap_Year(Year))
        cout << "\nYes, Year [" << Year << "] is A Leap Year!\n";
    else
        cout << "\nNo, Year [" << Year << "] is Not A Leap Year!\n";


    system("pause>0");
    return 0;
}