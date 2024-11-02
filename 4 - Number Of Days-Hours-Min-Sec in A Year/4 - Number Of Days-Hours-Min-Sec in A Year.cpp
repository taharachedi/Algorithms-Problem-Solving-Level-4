#include <iostream>

using namespace std;

short Read_Year() {

    short Year = 0;

    cout << "Please Enter A Year To Check : ";
    cin >> Year;

    return Year;
}


bool is_Leap_Year(short Year) {

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}


short Num_Of_Days_In_Year(short Year) {

    return is_Leap_Year(Year) ? 366 : 365;
}

short Num_Of_Hours_In_Year(short Year) {

    return Num_Of_Days_In_Year(Year) * 24;
}

int Num_Of_Minutes_In_Year(short Year) {

    return Num_Of_Hours_In_Year(Year) * 60;
}

int Num_Of_Seconds_In_Year(short Year) {

    return Num_Of_Minutes_In_Year(Year) * 60;
}


int main()
{
    system("color f3");
    
    short Year = Read_Year();

    cout << "\n\n-----------------------------------------------------------\n";

    cout << "\nNumber Of Days    In Year [" << Year << "] is : " << Num_Of_Days_In_Year(Year);
    cout << "\nNumber Of Hours   In Year [" << Year << "] is : " << Num_Of_Hours_In_Year(Year);
    cout << "\nNumber Of Minutes In Year [" << Year << "] is : " << Num_Of_Minutes_In_Year(Year);
    cout << "\nNumber Of Seconds In Year [" << Year << "] is : " << Num_Of_Seconds_In_Year(Year);

    cout << "\n\n-----------------------------------------------------------\n";

    system("pause>0");
    return 0;
}