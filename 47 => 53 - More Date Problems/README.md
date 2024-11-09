# 📅 Problem 47 To 53: Date Manipulation Program 

> **A C++ program for various date calculations, including finding the difference in days until the end of the week, month, or year, and checking if a date is a business day or weekend.**

## 📘 Project Overview
This C++ program provides utility functions to work with dates, such as determining the current date, checking if it is a business day or weekend, finding the days remaining until the end of the week, month, and year, and handling leap year calculations. It showcases how to perform precise date calculations in C++.

---

## 🌟 Features
- **System Date Retrieval**: Gets the current system date.
- **Day of the Week Calculation**: Calculates the day of the week for a given date.
- **Weekend and Business Day Checks**:
  - Checks if a given date is a weekend.
  - Identifies if a date is the end of the week.
- **Days Calculation**:
  - Determines days remaining until the end of the week.
  - Calculates days left in the current month and year.
  - Adjusts calculations for leap years.
  
---

## ⚙️ How It Works
### 1. Struct for Date
- **`stDate`**: Stores `Year`, `Month`, and `Day`.

### 2. Utility Functions
- **Day Calculations**:
  - **`Day_Of_Week_Order(short Day, short Month, short Year)`**: Returns the day of the week for a specified date.
  - **`Day_Short_Name(short DayOfWeek)`**: Provides a short name for each day (e.g., "Mon" for Monday).
- **Leap Year Calculation**:
  - **`is_Leap_Year(short Year)`**: Checks if a year is a leap year.
  - **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the number of days in a month, accounting for leap years.
- **Business Day and Weekend Check**:
  - **`Is_End_Of_Week(stDate Date)`**: Checks if a date is the end of the week (Saturday).
  - **`Is_Week_End(stDate Date)`**: Identifies if the date falls on a weekend (Friday or Saturday).
  - **`Is_Business_Day(stDate Date)`**: Confirms if a date is a business day.
  
### 3. Date Manipulation
- **Date Difference and Calculation**:
  - **`Days_Until_The_End_Of_Week(stDate Date)`**: Finds days remaining until the end of the week.
  - **`Days_Until_The_End_Of_Month(stDate Date)`**: Calculates days left in the current month.
  - **`Days_Until_The_End_Of_Year(stDate Date)`**: Determines days left in the current year.
- **Date Comparison and Adjustment**:
  - **`is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Compares two dates to check if the first is before the second.
  - **`Get_Difference_In_Days(stDate Date1, stDate Date2, bool Include_End_Day)`**: Finds the number of days between two dates.
  - **`Increase_Date_By_One_Day(stDate Date)`**: Increments a date by one day.

### 4. Display of Results
The `main()` function demonstrates the above functions by:
- Displaying the current date.
- Checking if it is a business day or weekend.
- Calculating days until the end of the week, month, and year.

---

## 📋 Code Breakdown
- **Structs and Helper Functions**: The `stDate` struct and helper functions are used to store, manipulate, and check date properties.
- **Main Program Flow**:
    - Retrieves and displays the current system date.
    - Checks and displays if the current day is the end of the week, a weekend, or a business day.
    - Calculates and displays the remaining days in the week, month, and year.

---

## ▶️ Sample Execution
Here is an example of the program's output when run:

```plaintext
Today is : Wed , 6/11/2024

Is it End Of Week? 
No it's Not end of week!

Is it Weekend? 
No It is Not A Weekend!

Is it Business Day? 
Yes It is A Business Day!

Days Until End Of Week : 3 Day(s).
Days Until End Of Month : 24 Day(s).
Days Until End Of Year : 55 Day(s).
