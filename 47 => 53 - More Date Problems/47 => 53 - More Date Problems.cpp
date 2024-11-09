#pragma warning (disable:4996)

#include <iostream>
#include <ctime>
using namespace std;


struct stDate
{
    short Year;
    short Month;
    short Day; 
};


short Day_Of_Week_Order(short Day,short Month,short Year) {

    short a, y, m;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7; 
}

short Day_Of_Week_Order(stDate Date) {

    return Day_Of_Week_Order(Date.Day, Date.Month, Date.Year);
}

string Day_Short_Name(short DayOfWeek) {

    string ArrDayName[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

    return ArrDayName[DayOfWeek];
}



stDate Get_System_Date() {

    stDate Date;

    time_t t = time(0);
    tm* now = localtime(&t);

    Date.Year = now->tm_year + 1900;
    Date.Month = now->tm_mon + 1;
    Date.Day = now->tm_mday;

    return Date;
}


bool Is_End_Of_Week(stDate Date) {

    return Day_Of_Week_Order(Date) == 6;
}


bool Is_Week_End(stDate Date) {

    short DayIndex = Day_Of_Week_Order(Date);

    return (DayIndex == 5 || DayIndex == 6); 
}

bool Is_Business_Day(stDate Date) {

    return !Is_Week_End(Date); 
}


short Days_Until_The_End_Of_Week(stDate Date) {

    return 6 - Day_Of_Week_Order(Date);
}


bool is_Leap_Year(short Year) {

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}


short Num_Of_Days_In_Month(short Month,short Year) {

    short Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Days[Month - 1];
}


bool is_Last_Day_In_Month(stDate Date) {

    return Date.Day == Num_Of_Days_In_Month(Date.Month, Date.Year);
}

bool is_Last_Month_In_Year(short Month) {

    return (Month == 12);
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


short Get_Difference_In_Days(stDate Date1, stDate Date2, bool Include_End_Day = false) {

    short Diff = 0;

    while (is_Date1_Before_Date2(Date1, Date2)) {

        Diff++;
        Date1 = Increase_Date_By_One_Day(Date1);
    }

    return Include_End_Day ? ++Diff : Diff;  
}


short Days_Until_The_End_Of_Month(stDate Date) { 

    stDate End_Of_Month_Date;

    End_Of_Month_Date.Day = Num_Of_Days_In_Month(Date.Month,Date.Year);
    End_Of_Month_Date.Month = Date.Month;
    End_Of_Month_Date.Year = Date.Year;

    return Get_Difference_In_Days(Date, End_Of_Month_Date, true);
}



short Days_Until_The_End_Of_Year(stDate Date) {

    stDate End_Of_Year_Date; 

    End_Of_Year_Date.Day = 31;
    End_Of_Year_Date.Month = 12;
    End_Of_Year_Date.Year = Date.Year;

    return Get_Difference_In_Days(Date, End_Of_Year_Date, true); 
}


int main()
{
    system("color f3");

    stDate Date = Get_System_Date();
      
    cout << "\nToday is : " << Day_Short_Name(Day_Of_Week_Order(Date)) << " , "
        << Date.Day << "/" << Date.Month << "/" << Date.Year;


    cout << "\n\nIs it End Of Week? ";
    if (Is_End_Of_Week(Date))
    {
        cout << "\nYes it is Saturday, it's of Week! ";
    }
    else
    {
        cout << "\nNo it's Not end of week! ";
    }



    cout << "\n\nIs it Weekend? ";
    if (Is_Week_End(Date))
    {
        cout << "\nYes It is A Weekend! ";
    }
    else
    {
        cout << "\nNo It is Not A Weekend! ";
    }


    cout << "\n\nIs it Business Day ? ";
    if (Is_Business_Day(Date)) 
    {
        cout << "\nYes It is A Business Day! ";
    }
    else
    {
        cout << "\nNo It is Not A Business Day! ";
    }



    cout << "\n\nDays Until End Of Week : " << Days_Until_The_End_Of_Week(Date) << " Day(s).";

    cout << "\n\nDays Until End Of Month : " << Days_Until_The_End_Of_Month(Date) << " Day(s).";

    cout << "\n\nDays Until End Of Year : " << Days_Until_The_End_Of_Year(Date) << " Day(s).";


    system("pause>0");
    return 0;
}
