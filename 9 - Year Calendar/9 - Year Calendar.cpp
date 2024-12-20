#include <iostream>
#include <cstdlib>

using namespace std;


string Month_ShortName(short Month) {

    string Arr_Month[12] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };

    return Arr_Month[Month - 1];
}


short Day_Of_Week_Order(short Day, short Month, short Year) {

    short a, y, m;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}


bool is_Leap_Year(short Year) {

    return ((Year % 400 == 0) && (Year % 4 == 0 && Year % 100 != 0));
}


short Num_Of_Days_In_A_Month(short Month, short Year) {

    short Num_Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (is_Leap_Year(Year) ? 29 : 28) : Num_Days[Month - 1];
}


void Print_Month_Calendar(short Month, short Year) {

    printf("\n\n---------------- %s ----------------\n", Month_ShortName(Month).c_str());

    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat  \n");

    short First_Day = Day_Of_Week_Order(1, Month, Year);
    short i;

    for (i = 0; i < First_Day; i++)
    {
        printf("     ");
    }
    
    short Num_Of_Days = Num_Of_Days_In_A_Month(Month, Year);

    for (short j = 1; j <= Num_Of_Days; j++) 
    {
        printf("%5d", j);

        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }

    }

    printf("\n-------------------------------------\n\n");
}



void Print_Year_Calendar(short Year) {

    printf("\n------------------------------------\n\n");
    printf("\t Calendar - %d \n", Year);
    printf("\n------------------------------------\n\n");

    for (short i = 1; i <= 12; i++)
    {
        Print_Month_Calendar(i, Year); 
    }
    
}



short Read_Year() {

    short Year = 0;

    cout << "Please Enter A Year : ";
    cin >> Year; 

    return Year; 
}


int main()
{
    system("color f3");

    Print_Year_Calendar(Read_Year());


    system("pause>0");
    return 0;
}