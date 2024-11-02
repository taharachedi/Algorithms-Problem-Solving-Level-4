# 📅 Problem 16: Date Incrementer By One Day

✨ This C++ program allows users to input a date and then increments the date by one day. It takes into account leap years and month-end transitions.

## 🛠️ Features
- 📅 **Date Input**: Prompts the user to enter day, month, and year.
- 🔍 **Leap Year Check**: Determines if the year is a leap year.
- 📆 **Last Day/Last Month Check**: Checks if the current day is the last day of the month and if the month is December.
- ➕ **Date Increment**: Increments the date by one day and handles transitions between months and years correctly.

## 📚 How It Works
1. 👤 **User Input**: The user is asked to enter a full date (day, month, year).
2. 📅 **Leap Year Calculation**: Determines if the year is a leap year.
3. 🔄 **Date Increment Logic**:
   - If the entered date is the last day of the month, the day resets to 1 and the month increments.
   - If the month is December and the day is the last day, it rolls over to January 1 of the following year.

## 🔧 Functions Used
- 📅 **`Read_Day()`**: Gets the day input from the user.
- 📆 **`Read_Month()`**: Gets the month input from the user.
- 🗓️ **`Read_Year()`**: Gets the year input from the user.
- 📅 **`Read_Full_Date()`**: Combines day, month, and year inputs into a `stDate` struct.
- 🔄 **`is_Leap_Year(short Year)`**: Checks if a year is a leap year.
- 🔢 **`Num_Of_Days_In_A_Month(short Month, short Year)`**: Returns the number of days in a month, accounting for leap years in February.
- 🔍 **`is_Last_Day_In_Month(stDate Date)`**: Checks if the entered day is the last day in the month.
- 📅 **`is_Last_Month_In_Year(short Month)`**: Checks if the entered month is December.
- ➕ **`Increase_Date_By_One_Day(stDate Date)`**: Increments the date by one day and handles month-end and year-end transitions.

## 🚀 Getting Started

📅 The program will prompt the user to enter a date, then display the incremented date.

## ▶️ Execution Example
🎯 If the user enters "February 28, 2024" (a leap year), the program will output:
```plaintext

Please Enter A Day : 28
Please Enter A Month : 2
Please Enter A Year : 2024

Date After Adding One Day : 29/2/2024



- For December 31:

Please Enter A Day : 31
Please Enter A Month : 12
Please Enter A Year : 2023

Date After Adding One Day : 1/1/2024


