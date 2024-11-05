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

short Number_Of_Days_In_Month(short Month, short Year) {

    short Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Days[Month - 1];
}


bool is_Last_Day_In_Month(stDate Date) {

    return Date.Day == Number_Of_Days_In_Month(Date.Month, Date.Year); 
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


stDate Increase_Date_By_X_Days(stDate Date,short Days) {
     
    for (short i = 1; i <= Days; i++) 
    {
        Date = Increase_Date_By_One_Day(Date);
    }
    return Date;
}


stDate Increase_Date_By_One_Week(stDate Date) {

    for (short i = 1; i <= 7; i++)
    {
        Date = Increase_Date_By_One_Day(Date);
    }
    return Date;
}


stDate Increase_Date_By_X_Weeks(stDate Date, short Weeks) {

    for (short i = 1; i <= Weeks; i++) 
    {
        Date = Increase_Date_By_One_Week(Date);
    }
    return Date; 
}


stDate Increase_Date_By_One_Month(stDate Date) {


    if (Date.Month == 12)
    {
        Date.Month = 1;
        Date.Year++;
    }
    else
    {
        Date.Month++;
    }

    short Num_Of_Days_In_Current_Month = Number_Of_Days_In_Month(Date.Month, Date.Year);

    if (Date.Day > Num_Of_Days_In_Current_Month)
    {
        Date.Day = Num_Of_Days_In_Current_Month; 
    }

    return Date;
}


stDate Increase_Date_By_X_Month(stDate Date, short Months) {

    for (short i = 1; i <= Months; i++) 
    {
        Date = Increase_Date_By_One_Month(Date);
    }
    return Date; 
}



stDate Increase_Date_By_One_Year(stDate Date) {

    Date.Year++;
    return Date; 
}


stDate Increase_Date_By_X_Years(stDate Date, short Years) {

    for (short i = 1; i <= Years; i++) 
    {
        Date = Increase_Date_By_One_Year(Date);
    }
    return Date; 
}


stDate Increase_Date_By_X_Years_Faster(stDate Date, short Years) {

    Date.Year += Years;   
    return Date;
}



stDate Increase_Date_By_One_Decade(stDate Date) {

    Date.Year += 10;
    return Date;
}


stDate Increase_Date_By_X_Decades(stDate Date, short Decade) {

    for (short i = 1; i <= Decade * 10; i++) 
    {
        Date = Increase_Date_By_One_Year(Date);
    }
    return Date;
}


stDate Increase_Date_By_X_Decades_Faster(stDate Date, short Decade) {

    Date.Year += 10 * Decade;    
    return Date;
}


stDate Increase_Date_By_One_Century(stDate Date) {

    Date.Year += 100;
    return Date;
}

stDate Increase_Date_By_One_Millennium(stDate Date) {

    Date.Year += 1000;
    return Date;
}


int main()
{
    system("color f3");

    stDate Date = Read_Full_Date();

    cout << "\nDate After : \n";

    Date = Increase_Date_By_One_Day(Date);
    cout << "\n01-Adding One Day is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_X_Days(Date,10);
    cout << "\n02-Adding 10 Days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_One_Week(Date);
    cout << "\n03-Adding One Week is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_X_Weeks(Date,10);
    cout << "\n04-Adding 10 Weeks is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_One_Month(Date);
    cout << "\n05-Adding One Month is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_X_Month(Date, 5);
    cout << "\n06-Adding 5 Months is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_One_Year(Date);
    cout << "\n07-Adding One Year is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_X_Years(Date, 10);
    cout << "\n08-Adding 10 Years is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_X_Years_Faster(Date, 10);
    cout << "\n09-Adding 10 Years (Faster) is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_One_Decade(Date);
    cout << "\n10-Adding One Decade is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_X_Decades(Date, 10);
    cout << "\n11-Adding 10 Decades is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_X_Decades_Faster(Date, 10);
    cout << "\n12-Adding 10 Decades (Faster) is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_One_Century(Date); 
    cout << "\n13-Adding One Century is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = Increase_Date_By_One_Millennium(Date);  
    cout << "\n14-Adding One Millennium is : " << Date.Day << "/" << Date.Month << "/" << Date.Year;

    system("pause>0");
    return 0;
}
