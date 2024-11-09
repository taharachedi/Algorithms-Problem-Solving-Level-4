#include <iostream>

using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;
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


short Day_Of_Week_Order(short Day, short Month, short Year) {

    short a, y, m;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}


short Day_Of_Week_Order(stDate Date) {

    return Day_Of_Week_Order(Date.Day, Date.Month, Date.Year);
}


string Day_Short_Name(short Day) {

    string Arr_Day[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

    return Arr_Day[Day];
}


bool is_Leap_Year(short Year) {

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}


short Num_Of_Days_In_Month(short Month, short Year) {

    short NumOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : NumOfDays[Month - 1];
}


bool is_Last_Day_In_Month(stDate Date) {

    return Date.Day == Num_Of_Days_In_Month(Date.Month, Date.Year);
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



bool is_Date1_Before_Date2(stDate Date1, stDate Date2) {

    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true :
            ((Date1.Month == Date2.Month) ? Date1.Day < Date2.Day : false)) : false);
}


bool is_Weekend(stDate Date) {

    short IndexDay = Day_Of_Week_Order(Date);

    return (IndexDay == 5 || IndexDay == 6);
}

bool is_Business_Day(stDate Date) {

    return !is_Weekend(Date);
}

short Calculate_Vacation_Days(stDate Date_From,stDate Date_To) {

    short DaysCount = 0;

    while (is_Date1_Before_Date2(Date_From, Date_To)) {

        if (is_Business_Day(Date_From))
            DaysCount++;

        Date_From = Increase_Date_By_One_Day(Date_From);
    }

    return DaysCount;   
}


int main()
{
    system("color f3");

    cout << "Vacation Starts : \n";
    stDate Date_From = Read_Full_Date();

    cout << "\nVacation Ends : \n";
    stDate Date_To = Read_Full_Date();

    cout << "\nVacation From : " << Day_Short_Name(Day_Of_Week_Order(Date_From)) << " , "
        << Date_From.Day << "/" << Date_From.Month << "/" << Date_From.Year;

    cout << "\nVacation To : " << Day_Short_Name(Day_Of_Week_Order(Date_To)) << " , "
        << Date_To.Day << "/" << Date_To.Month << "/" << Date_To.Year;


    cout << "\n\nActucal Vacation Days is : " << Calculate_Vacation_Days(Date_From, Date_To);

    system("pause>0");
    return 0;
}