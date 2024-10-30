#include <iostream>
using namespace std;

short Read_Year() {

    short Year;

    cout << "Please Enter A Year : ";
    cin >> Year;

    return Year;
}


short Read_Month() {

    short Month;

    do
    {
        cout << "\nPlease Enter A Month : ";
        cin >> Month;

    } while (Month < 1 || Month > 12);

    return Month; 
}


short Read_Day() {

    short Day;

    do
    {
        cout << "\nPlease Enter A Day : ";
        cin >> Day;

    } while (Day < 1 || Day > 31);

    return Day;
}



short Day_Of_Week_Order(short Day, short Month, short Year) {

    short a, y, m ;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}


string Day_ShortName(short Num_Of_Day) {

    string ArrDayName[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

    return ArrDayName[Num_Of_Day];
}

int main()
{
    system("color f3");

    short Year = Read_Year();
    short Month = Read_Month();
    short Day = Read_Day();


    cout << "\nDate      : " << Day << "/" << Month << "/" << Year;
    cout << "\nDay Order : " << Day_Of_Week_Order(Day, Month, Year);
    cout << "\nDay Name  : " << Day_ShortName(Day_Of_Week_Order(Day, Month, Year)) << endl; 

    system("pause>0");
    return 0;
}