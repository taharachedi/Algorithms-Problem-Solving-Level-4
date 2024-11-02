# 📆 Problem 8 :Monthly Calendar Display

## 📝 Description
This C++ program displays a formatted monthly calendar based on the year and month entered by the user. It takes into account leap years and correctly formats the month’s days under their respective weekdays.

## 💡 Code Explanation

- **📅 Function `Day_Of_Week_Order`**:
  - Computes the weekday index (0-6) for the first day of a given month and year, using Zeller's Congruence formula.

- **📆 Function `is_Leap_Year`**:
  - Checks if the specified year is a leap year. Returns `true` for leap years and `false` otherwise.

- **🔢 Function `Num_Of_Days_In_A_Month`**:
  - Returns the number of days in a month, accounting for leap years in February.

- **🗓️ Function `Print_Month_Calendar`**:
  - Prints the calendar for the specified month and year.
  - Aligns each date under its respective weekday, starting from the calculated day for the 1st.

## ▶️ Execution Example

Sample output if the user enters `2023` for the year and `10` for the month:
```plaintext
Please Enter A Year : 2023
Please Enter A Month : 10

------------------ Oct ----------------

  Sat  Mon  Tue  Wed  Thu  Fri  Sat

        1    2    3    4    5    6
   7    8    9   10   11   12   13
  14   15   16   17   18   19   20
  21   22   23   24   25   26   27
  28   29   30   31

---------------------------------------
