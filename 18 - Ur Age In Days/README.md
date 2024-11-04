# 🎂 Problem 18: Age Calculator in Days (C++)

> **📆 Calculate your age in days, including leap years and accurate day counts for each month!**

## 📘 Project Overview
This C++ program calculates the number of days from a user's date of birth to the current date, displaying the user's age in days. The program includes support for leap years and takes into account the varying number of days in each month.

---

## 🌟 Features
- **📅 Input Date of Birth**: Allows users to enter their birth date.
- **📆 System Date Retrieval**: Automatically fetches the current date from the system.
- **🔄 Leap Year Awareness**: Calculates February days accurately for leap years.
- **📉 Accurate Day Count**: Counts days for each month and calculates age in days.

---

## ⚙️ How It Works
### 1. Date Struct and Utility Functions
- **`struct stDate`**: A structure holding `Day`, `Month`, and `Year`.
- **`Read_Day()`, `Read_Month()`, `Read_Year()`**: Functions for user input to retrieve the day, month, and year.
- **`Read_Full_Date()`**: Combines day, month, and year into a complete date.
- **`is_Leap_Year(short Year)`**: Checks if a given year is a leap year.
- **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the correct day count for each month, accounting for leap years.
- **`is_Last_Day_In_Month(stDate Date)`**: Verifies if the given date is the last day of the month.
- **`Increase_Date_By_One_Day(stDate Date)`**: Increments a date by one day.
- **`Is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Compares two dates to determine if the first date is before the second.
- **`Get_System_Date()`**: Retrieves the current date from the system.

### 2. Main Calculation Function
- **`Get_Difference_In_Days(stDate Date1, stDate Date2, bool Include_End_Day)`**: Calculates the number of days between the user’s birth date and the current date, with an option to include the end day in the count.

### 3. Program Flow
- The main function:
  1. Sets the console color.
  2. Prompts the user to input their birth date.
  3. Retrieves the current date.
  4. Calculates and displays the user's age in days, including leap year adjustments.

---

## 🛠️ Code Breakdown
### 🔹 Key Components
- **Date Structure (`stDate`)**: Manages day, month, and year data.
- **Leap Year Checker (`is_Leap_Year`)**: Ensures February's days are correctly counted for leap years.
- **Date Difference (`Get_Difference_In_Days`)**: Calculates the day-by-day difference between birth and current dates.

---

## ▶️ Sample Execution
Running the program gives console output similar to:

```plaintext
Please Enter Ur Day Of Birth:
Please Enter A Day: 15
Please Enter A Month: 6
Please Enter A Year: 1995

Ur Age is: 10795 Day(s).
