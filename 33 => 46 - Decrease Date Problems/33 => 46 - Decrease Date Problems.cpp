#include <iostream>
using namespace std;

struct stDate {

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

    short Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Days[Month - 1];
}


stDate Decrease_Date_By_One_Day(stDate Date) {

    if (Date.Day == 1)
    {
        if (Date.Month == 1)
        {
            Date.Day = 31;
            Date.Month = 12;
            Date.Year--;
        }
        else
        {
            Date.Month--;
            Date.Day = Num_Of_Days_In_Month(Date.Month,Date.Year);
        }

    }
    else
    {
        Date.Day--;
    }

    return Date;
}



stDate Decrease_Date_By_X_Days(stDate Date,short Days) {

    for (short i = 1; i <= Days; i++)
    {
        Date = Decrease_Date_By_One_Day(Date);   
    }
    return Date;
}


stDate Decrease_Date_By_One_Week(stDate Date) {

    for (short i = 1; i <= 7; i++)
    {
        Date = Decrease_Date_By_One_Day(Date);
    }
    return Date;
}


stDate Decrease_Date_By_X_Weeks(stDate Date, short Weeks) {

    for (short i = 1; i <= Weeks; i++)
    {
        Date = Decrease_Date_By_One_Week(Date);
    }
    return Date;
}


stDate Decrease_Date_By_One_Month(stDate Date) {

    if (Date.Month == 1)
    {
        Date.Month = 12;
        Date.Year--;
    }
    else
    {
        Date.Month--;
    }

    short NumOfDaysInCurrentMonth = Num_Of_Days_In_Month(Date.Month, Date.Year);

    if (Date.Day > NumOfDaysInCurrentMonth)
    {
        Date.Day = NumOfDaysInCurrentMonth; 
    }
    return Date; 
}


stDate Decrease_Date_By_X_Months(stDate Date, short Months) {

    for (short i = 1; i <= Months; i++)
    {
        Date = Decrease_Date_By_One_Month(Date);
    }
    return Date;  
}


stDate Decrease_Date_By_One_Year(stDate Date) {

    Date.Year--;
    return Date;
}


stDate Decrease_Date_By_X_Years(stDate Date, short Years) {

    for (short i = 1; i <= Years; i++)
    {
        Date = Decrease_Date_By_One_Year(Date);
    }
    return Date;
}


stDate Decrease_Date_By_X_Years_Faster(stDate Date, short Years) {

    Date.Year -= Years;
    return Date;
}

stDate Decrease_Date_By_One_Decade(stDate Date) {

    Date.Year -= 10;
    return Date;
}

stDate Decrease_Date_By_X_Decades(stDate Date, short Decades) {

    for (short i = 1; i <= Decades * 10; i++)
    {
        Date = Decrease_Date_By_One_Year(Date); 
    }
    return Date;
}


stDate Decrease_Date_By_X_Decades_Faster(stDate Date, short Decades) {

    Date.Year -= Decades * 10;
    return Date;
}

stDate Decrease_Date_By_One_Century(stDate Date) {

    Date.Year -= 100;
    return Date; 
}

stDate Decrease_Date_By_One_Millennium(stDate Date) {

    Date.Year -= 1000;
    return Date;
}


int main()
{
    system("color f3");

    stDate Date = Read_Full_Date();

    cout << "\nDate After : \n";

    Date = Decrease_Date_By_One_Day(Date);
    cout << "\n01-Subtracting One Day is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_X_Days(Date, 10);
    cout << "\n02-Subtracting 10 Days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_One_Week(Date); 
    cout << "\n03-Subtracting One Week is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_X_Weeks(Date, 10);
    cout << "\n04-Subtracting 10 Weeks is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_One_Month(Date);
    cout << "\n05-Subtracting One Month is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_X_Months(Date, 5);
    cout << "\n06-Subtracting 5 Months is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_One_Year(Date);
    cout << "\n07-Subtracting One Year is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_X_Years(Date, 10);
    cout << "\n08-Subtracting 10 Years is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_X_Years_Faster(Date, 10);
    cout << "\n09-Subtracting 10 Years (Faster) is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_One_Decade(Date);
    cout << "\n10-Subtracting One Decade is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_X_Decades(Date, 10);
    cout << "\n11-Subtracting 10 Decades is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_X_Decades_Faster(Date, 10);
    cout << "\n12-Subtracting 10 Decades (Faster) is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_One_Century(Date);
    cout << "\n13-Subtracting One Century is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Decrease_Date_By_One_Millennium(Date);
    cout << "\n14-Subtracting One Millennium is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;


    system("pause>0");
    return 0;
}
