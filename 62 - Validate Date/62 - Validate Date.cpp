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

    cout << "Please Enter A Day : ";
    cin >> Day;

    return Day;
}

short Read_Month() {
    short Month;

    cout << "Please Enter A Month : ";
    cin >> Month;

    return Month;
}

short Read_Year() {
    short Year;

    cout << "Please Enter A Year : ";
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

short Num_Of_Days_In_Month(short Month, short Year) {

    if (Month < 1 || Month > 12)
        return 0;

    short Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Days[Month - 1];
}


bool is_Validate_Date(stDate Date) {

    if (Date.Day < 1 || Date.Day > 31)
        return false;

    if (Date.Month < 1 || Date.Month > 12)
        return false;

    if (Date.Month == 2)
    {
        if (is_Leap_Year(Date.Year)) {

            if (Date.Day > 29)
                return false;
        }
        else
        {
            if (Date.Day > 28)
                return false;
        }
    }

    short DaysInMonth = Num_Of_Days_In_Month(Date.Month, Date.Year);

    if (Date.Day > DaysInMonth)
    {
        return false;
    }

    return true;
}


int main()
{
    system("color f3");

    stDate Date = Read_Full_Date();

    if (is_Validate_Date(Date))
        cout << "\nYes, Date is A Valide Date! ";
    else
        cout << "\nNo, Date is A Not Valide Date! ";

    system("pause>0");
    return 0;
}
