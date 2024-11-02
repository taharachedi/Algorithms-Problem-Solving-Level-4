# 📅 Problem 12 :Add Days To Date

✨ This C++ program takes a starting date and a specified number of days to add, then calculates and displays the resulting date. The program checks for leap years and properly adjusts for the correct number of days in each month.

## 🛠️ Features
- 🗓️ **Leap Year Adjustment**: Correctly considers February as 29 days during leap years.
- 📅 **Date Calculation**: Adds a specified number of days to a given starting date and outputs the resulting date.
- 👤 **User Input**: Prompts the user to enter a day, month, year, and the number of days to add.

## 📚 How It Works
1. 👤 **User Input**: The program gathers the starting day, month, and year, as well as the number of days to add.
2. 🗓️ **Leap Year Check**: Determines if the entered year is a leap year.
3. 📅 **Date Calculation**: Adds the specified days to the starting date and outputs the final date.

## 🔧 Functions Used
- 📅 **`Read_Day()`**: Prompts the user to enter a day.
- 📆 **`Read_Month()`**: Prompts the user to enter a month.
- 🗓️ **`Read_Year()`**: Prompts the user to enter a year.
- 🔄 **`How_Many_Days_To_Add()`**: Asks the user how many days they want to add.
- 🗓️ **`is_Leap_Year(short Year)`**: Checks if a given year is a leap year.
- 📅 **`Number_Of_Days_In_A_Month(short Month, short Year)`**: Returns the number of days in a specific month, adjusting for leap years.
- 📅 **`Days_From_The_Beginning_Of_The_Year(short Day, short Month, short Year)`**: Calculates the days from January 1 to the given date.
- 🔄 **`Date_Add_Days(short Days_To_Add, stDate Date)`**: Adds the specified days to a starting date and returns the new date.

## ▶️ Execution Example

🎯 If the user enters the date "April 15, 2023," and requests to add 30 days, the program will output:
```plaintext

Please Enter A Day : 15
Please Enter A Month : 4
Please Enter A Year : 2023
How Many Days To Add?  30

Date After Adding [30] days is : 15/5/2023

