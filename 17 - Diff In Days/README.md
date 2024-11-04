# 📅 Problem 17: Date Difference Calculator 

> **🔢 A C++ program that calculates the difference in days between two dates, with an option to include the end day in the count.**

## 📘 Project Overview
This program allows users to input two dates, calculates the difference in days between them, and optionally includes the end day in the calculation. It also supports leap years, making it accurate for date comparisons and difference calculations.

---

## 🌟 Features
- **📆 Input Full Dates**: Users can input two full dates (day, month, year) to compare.
- **🔄 Leap Year Handling**: Correctly calculates days in February for leap years.
- **🗓️ Month-Specific Day Counts**: Uses an array to store the number of days in each month and adjusts for leap years.
- **📉 Date Difference Calculation**: Calculates the difference in days, with an option to include the end day.

---

## ⚙️ How It Works
### 1. Struct and Functions
- **`struct stDate`**: Stores date data with day, month, and year.
- **`Read_Day()`, `Read_Month()`, `Read_Year()`**: Functions to input day, month, and year from the user.
- **`Read_Full_Date()`**: Combines day, month, and year into a full date.
- **`is_Leap_Year(short Year)`**: Checks if a year is a leap year.
- **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the number of days in a given month, accounting for leap years.
- **`is_Last_Day_In_Month(stDate Date)`**: Checks if a date is the last day of the month.
- **`Increase_Date_By_One_Day(stDate Date)`**: Increments a date by one day.
- **`is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Compares two dates to see if the first is before the second.
- **`Get_Difference_In_Days(stDate Date1, stDate Date2, bool include_End_Day)`**: Calculates the number of days between two dates, optionally including the end day.

### 2. Program Flow
The main function:
1. Sets console color for clarity.
2. Prompts the user to input two dates.
3. Displays the difference in days, both with and without including the end day.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **Date Struct (`stDate`)**: Holds `Day`, `Month`, and `Year` values for date management.
- **Leap Year Check (`is_Leap_Year`)**: Determines if the year is a leap year, affecting February's day count.
- **Date Difference (`Get_Difference_In_Days`)**: Loops day-by-day until reaching the second date, counting each day.

---

## ▶️ Sample Execution
Running the program gives console output similar to:

```plaintext
Please Enter A Day: 1
Please Enter A Month: 1
Please Enter A Year: 2023

Please Enter A Day: 10
Please Enter A Month: 1
Please Enter A Year: 2023

Difference is : 9 Day(s).
Difference (including End Day) is : 10 Day(s).
