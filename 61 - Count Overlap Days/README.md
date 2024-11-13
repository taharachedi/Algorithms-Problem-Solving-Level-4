# 📅 Problem 61: Count Overlap Days

> **A C++ program to calculate the overlap days between two date periods.**

## 📘 Project Overview
This C++ program prompts the user to input two periods (each defined by a start and end date) and then calculates the number of overlapping days between them. The program uses custom date and period structures and provides functions for date manipulation and period comparison.

---

## 🌟 Features
- **User-Friendly Date Input**: Prompts the user to enter day, month, and year for both start and end dates of two periods.
- **Leap Year Support**: Accounts for leap years when calculating the number of days in February.
- **Date Comparison**: Determines if one date is before, after, or the same as another date.
- **Period Comparison**: Checks if two periods overlap and counts the exact overlap in days.
- **Date Utilities**: Handles last day of month, last month of year, and increments dates by one day as needed.

---

## ⚙️ How It Works

### 1. Data Structures
- **`stDate`**: Struct for storing a date with `Day`, `Month`, and `Year`.
- **`stPeriod`**: Struct for storing two dates (`Start_Date` and `End_Date`) that define a period.

### 2. Date and Period Input Functions
- **`Read_Day()`**: Prompts for and reads the day of the date.
- **`Read_Month()`**: Prompts for and reads the month of the date.
- **`Read_Year()`**: Prompts for and reads the year of the date.
- **`Read_Full_Date()`**: Combines day, month, and year into a full `stDate`.
- **`Read_Period()`**: Prompts for the start and end dates of a period and returns an `stPeriod`.

### 3. Date Utility Functions
- **`is_Leap_Year(short Year)`**: Checks if the given year is a leap year.
- **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the number of days in a given month and year.
- **`is_Last_Day_In_Month(stDate Date)`**: Checks if a date is the last day of its month.
- **`is_Last_Month_In_Year(short Month)`**: Checks if the month is December.
- **`Increase_Date_By_One_Day(stDate Date)`**: Increments a date by one day, adjusting month and year if necessary.

### 4. Date Comparison Functions
- **`is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Returns `true` if `Date1` is before `Date2`.
- **`is_Date1_Equal_Date2(stDate Date1, stDate Date2)`**: Returns `true` if `Date1` is equal to `Date2`.
- **`is_Date1_After_Date2(stDate Date1, stDate Date2)`**: Returns `true` if `Date1` is after `Date2`.

### 5. Period and Overlap Functions
- **`Get_Difference_In_Days(stDate Date1, stDate Date2, bool IncludeEndDay)`**: Calculates the number of days between two dates.
- **`Period_Length_In_Days(stPeriod Period, bool IncludeEndDay)`**: Returns the length of a period in days.
- **`is_Overlap_Periods(stPeriod Period1, stPeriod Period2)`**: Checks if two periods overlap.
- **`Count_Overlap_Days(stPeriod Period1, stPeriod Period2)`**: Counts and returns the number of overlapping days between two periods.

### 6. Enum for Date Comparison
- **`enDateCompare`**: Defines date comparison options: Before, Equal, or After.

---

## ▶️ Sample Execution
Example of program output:

```plaintext
Enter Period 1:

Enter Start Date:
Please Enter A Day : 1
Please Enter A Month : 3
Please Enter A Year : 2023

Enter End Date:
Please Enter A Day : 15
Please Enter A Month : 3
Please Enter A Year : 2023

Enter Period 2:

Enter Start Date:
Please Enter A Day : 10
Please Enter A Month : 3
Please Enter A Year : 2023

Enter End Date:
Please Enter A Day : 20
Please Enter A Month : 3
Please Enter A Year : 2023

Overlap Days Count is : 6
