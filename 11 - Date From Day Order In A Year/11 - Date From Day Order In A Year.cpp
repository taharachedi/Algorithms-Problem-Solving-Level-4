#include <iostream>
using namespace std;


short Read_Day() {

    short Day;
     
    cout << "\nPlease Enter A Day : ";
    cin >> Day;

    return Day;
}


short Read_Month() {

    short Month;

    cout << "\nPlease Enter A Month : ";
    cin >> Month;

    return Month;
}

short Read_Year() {

    short Year;

    cout << "\nPlease Enter A Year : ";
    cin >> Year;

    return Year;
}


bool is_Leap_Year(short Year){
    
    return ((Year % 400 == 0) && (Year % 4 == 0 && Year % 100 != 0));
}

short Num_Of_Days_In_Month(short Month, short Year) {

    short Arr_Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Arr_Days[Month - 1];
}


short Num_Of_Days_From_The_Beginning_Of_The_Year(short Day, short Month, short Year) {

    short Total_Days = 0;

    for (short i = 1; i <= Month - 1; i++)
    {
        Total_Days += Num_Of_Days_In_Month(i, Year);
    }
    Total_Days += Day;

    return Total_Days;
}


struct stDate {
    short Day;
    short Month;
    short Year;
};

 

stDate Get_Date_From_Day_Order_In_Year(short Days_Order_In_Year,short Year) { 

    stDate Date;
    short RemainingDay = Days_Order_In_Year;

    Date.Year = Year;
    Date.Month = 1;

    short Month_Day;    

    while (true) {

        Month_Day = Num_Of_Days_In_Month(Date.Month, Year);

        if (RemainingDay > Month_Day)
        { 
            RemainingDay -= Month_Day;
            Date.Month++;   
        }
        else
        {
            Date.Day = RemainingDay;
            break;
        }
    }

    return Date;
}


int main()
{
    system("color f3");

    short Day = Read_Day();
    short Month = Read_Month();
    short Year = Read_Year();

    short Days_Order_In_Year = Num_Of_Days_From_The_Beginning_Of_The_Year(Day, Month, Year); 

    cout << "\nThe Number Of Days From The Beginning Of The Year is : " << Days_Order_In_Year << endl;

    stDate Date = Get_Date_From_Day_Order_In_Year(Days_Order_In_Year,Year); 


    cout << "\nDate For [" << Days_Order_In_Year << "]  is : " 
        << Date.Day << "/" << Date.Month << "/" << Date.Year;


    system("pause>0");
    return 0;
}