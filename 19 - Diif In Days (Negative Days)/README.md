# 📅 Problem 19: Date Difference Calculator (C++)

> **🔍 Calculate the difference in days between two dates, considering leap years and varying month lengths!**

## 📘 Project Overview
This C++ program computes the difference in days between two user-input dates, including options to account for the end day in the calculation. It handles leap years and ensures accurate day counts for each month.

---

## 🌟 Features
- **📅 Input Two Dates**: Users can enter two distinct dates for comparison.
- **🔄 Leap Year Awareness**: The program considers leap years for accurate calculations.
- **📉 Includes End Day Option**: Provides the option to include the end date in the day count.
- **🔄 Swap Dates**: Automatically swaps dates if the first date is after the second date for accurate difference calculation.

---

## ⚙️ How It Works
### 1. Date Struct and Utility Functions
- **`struct stDate`**: A structure that stores `Day`, `Month`, and `Year`.
- **`Read_Day()`, `Read_Month()`, `Read_Year()`**: Functions that prompt the user for input to retrieve the day, month, and year respectively.
- **`Read_Full_Date()`**: Combines user inputs into a complete date structure.
- **`is_Leap_Year(short Year)`**: Determines if a given year is a leap year.
- **`Num_of_Days_In_Month(short Month, short Year)`**: Returns the correct number of days for a specified month and year, accounting for leap years.
- **`is_Last_Day_In_Month(stDate Date)`**: Checks if the given date is the last day of the month.
- **`Increase_Date_By_One_Day(stDate Date)`**: Increments a date by one day, adjusting for month and year transitions.

### 2. Date Comparison and Difference Calculation
- **`Is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Compares two dates to see if the first date comes before the second.
- **`Swap_Dates(stDate& Date1, stDate& Date2)`**: Swaps the two dates if needed, ensuring the first date is always the earlier date.
- **`Get_Difference_In_Days(stDate Date1, stDate Date2, bool Include_End_Day)`**: Calculates the total days between two dates, with an option to include the end day in the count.

---

## 🛠️ Code Breakdown
### 🔹 Key Components
- **Date Structure (`stDate`)**: Encapsulates day, month, and year data.
- **Date Comparison and Swapping**: Ensures accurate day difference calculations regardless of the order of input dates.
- **Leap Year Checker**: Correctly counts days in February during leap years.
  
### Main Function Flow
- The main function:
  1. Sets the console color.
  2. Prompts the user to enter two dates.
  3. Calculates and displays the difference in days between the two dates, with an option to include the end day.

---

## ▶️ Sample Execution
Running the program produces console output similar to this:

```plaintext
Please Enter A Day: 15
Please Enter A Month: 6
Please Enter A Year: 1995

Please Enter A Day: 15
Please Enter A Month: 7
Please Enter A Year: 1995

Difference is: 30 Day(s).
Difference (Including End Day) is: 31 Day(s).
