# 📆 Problem 9 :Yearly Calendar Program in C++


This program displays a full calendar for a specified year in the console. The user inputs a year, and the program generates a 12-month calendar showing each month with the days aligned under the appropriate weekdays.

## ✨ Features
- 🏆 **Leap Year Calculation**: Correctly adjusts February for leap years.
- 📆 **Monthly Calendar Display**: Each month displays in a structured format with aligned days under the correct weekday headings (Sun, Mon, Tue, etc.).
- 📅 **Complete Year Calendar**: The program prints all 12 months for the specified year, with a clear layout for each month.

## 🔍 How It Works
1. 📝 **User Input**: The program prompts the user to input a year.
2. 🌐 **Leap Year Adjustment**: If the specified year is a leap year, February has 29 days; otherwise, it has 28.
3. 🗓️ **Calendar Layout**: Using Zeller's Congruence, the program calculates the weekday of the first day of each month and arranges the dates accordingly.

## 🔧 Functions Used
- 📖 **`Month_ShortName`**: Returns the short name of the month.
- 🔢 **`Day_Of_Week_Order`**: Calculates the day of the week for the first of each month using Zeller's Congruence.
- 🎉 **`is_Leap_Year`**: Determines if the specified year is a leap year.
- 📅 **`Num_Of_Days_In_A_Month`**: Returns the number of days in each month, adjusting for leap years.
- 🗓️ **`Print_Month_Calendar`**: Displays a formatted monthly calendar in the console.
- 📆 **`Print_Year_Calendar`**: Generates a calendar for the entire year by calling `Print_Month_Calendar` for each month.






## ▶️ Execution Example

Below is an example output when you run the program and input the year 2024:
```plaintext

Please Enter A Year: 2024

----------------    Jan    ----------------
  Sun  Mon  Tue  Wed  Thu  Fri  Sat  
       1    2    3    4    5    6  
  7    8    9   10   11   12   13  
 14   15   16   17   18   19   20  
 21   22   23   24   25   26   27  
 28   29   30   31  

----------------    Feb    ----------------
  Sun  Mon  Tue  Wed  Thu  Fri  Sat  
                 1    2    3  
  4    5    6    7    8    9   10  
 11   12   13   14   15   16   17  
 18   19   20   21   22   23   24  
 25   26   27   28   29  

----------------    Mar    ----------------
  Sun  Mon  Tue  Wed  Thu  Fri  Sat  
                 1    2    3  
  4    5    6    7    8    9   10  
 11   12   13   14   15   16   17  
 18   19   20   21   22   23   24  
 25   26   27   28   29   30   31  

... (continues for each month)

