# 📅 Problem 15 :Last Day & Last Month Checker 

✨ This C++ program lets users input a date, then checks if the entered day is the last day of the month and if the entered month is the last month of the year. The code demonstrates the use of structs, user-defined functions, and leap year logic.

## 🛠️ Features
- 📅 **Date Input**: Allows users to enter a full date (day, month, year).
- 🔍 **Last Day Check**: Determines if the entered day is the last day of the month, accounting for leap years.
- 🔄 **Last Month Check**: Checks if the entered month is December, the last month of the year.

## 📚 How It Works
1. 👤 **User Input**: Users enter the day, month, and year.
2. 📅 **Date Struct**: Stores date information in a `stDate` struct for efficient handling.
3. 📆 **Leap Year Function**: Determines if the given year is a leap year.
4. 🔄 **Last Day/Month Functions**:
   - `is_Last_Day_In_Month`: Checks if the entered day is the last day in the month.
   - `is_Last_Month_In_Year`: Checks if the entered month is December.

## 🔧 Functions Used
- 📅 **`Read_Day()`**: Prompts the user to enter the day.
- 📆 **`Read_Month()`**: Prompts the user to enter the month.
- 🗓️ **`Read_Year()`**: Prompts the user to enter the year.
- 📅 **`Read_Full_Date()`**: Combines day, month, and year inputs into a date struct.
- 🔄 **`is_Leap_Year(short Year)`**: Checks if a year is a leap year.
- 🔢 **`Num_Of_Days_In_A_Month(short Month, short Year)`**: Returns the number of days in a month, accounting for leap years in February.
- 🔍 **`is_Last_Day_In_Month(stDate Date)`**: Checks if the entered day is the last day in the month.
- 🔄 **`is_Last_Month_In_Year(short Month)`**: Checks if the entered month is December.

## 🚀 Getting Started

📅 The program will prompt the user to enter a date and will then indicate if the day is the last day in the month and if the month is December.

## ▶️ Execution Example

🎯 If the user enters "February 28, 2024" (a leap year), the program will output:
```plaintext
Please Enter A Day : 28
Please Enter A Month : 2
Please Enter A Year : 2024

Yes, Day is Last Day in Month!
No, Month is Not Last Month in Year!


For December 31:

Please Enter A Day : 31
Please Enter A Month : 12
Please Enter A Year : 2023

Yes, Day is Last Day in Month!
Yes, Month is Last Month in Year!

