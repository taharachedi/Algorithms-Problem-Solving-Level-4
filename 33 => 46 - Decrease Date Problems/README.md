# 📅 Problem 33 => 46: Decrease Date Problem

> **A C++ program to subtract various time units (days, weeks, months, years, etc.) from a user-provided date.**

## 📘 Project Overview
This C++ program enables a user to enter a specific date and then subtracts various time periods such as days, weeks, months, years, decades, centuries, and even millennia from the date. It showcases how to handle complex date calculations, taking into account leap years and varying days in months.

---

## 🌟 Features
- **User Input for Date**: Accepts day, month, and year values from the user.
- **Leap Year Calculation**: Checks if the given year is a leap year for accurate date calculations.
- **Flexible Time Subtraction**:
  - Subtracts a single day, week, month, or year.
  - Subtracts a specified number of days, weeks, months, years, and decades.
  - Efficient methods for subtracting multiple years and decades.
- **Output Display**: Shows the date after each subtraction operation.

---

## ⚙️ How It Works
### 1. Struct for Date
- **`stDate`**: Stores day, month, and year.

### 2. Input Functions
- **`Read_Full_Date()`**: Prompts the user to enter the day, month, and year, and stores them in an `stDate` structure.

### 3. Utility Functions
- **`is_Leap_Year(short Year)`**: Checks if a year is a leap year.
- **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the number of days in a given month, accounting for leap years.

### 4. Date Manipulation Functions
The program provides functions to decrease the date by various units:
- **`Decrease_Date_By_One_Day(...)`**: Subtracts one day.
- **`Decrease_Date_By_X_Days(...)`**: Subtracts multiple days.
- **`Decrease_Date_By_One_Week(...)`** and **`Decrease_Date_By_X_Weeks(...)`**: Subtract weeks.
- **`Decrease_Date_By_One_Month(...)`** and **`Decrease_Date_By_X_Months(...)`**: Subtract months, adjusting for varying month lengths.
- **`Decrease_Date_By_One_Year(...)`** and **`Decrease_Date_By_X_Years(...)`**: Subtracts years.
- **Efficient methods**: `Decrease_Date_By_X_Years_Faster(...)` and `Decrease_Date_By_X_Decades_Faster(...)` offer optimized year and decade subtraction.
- Functions for **centuries** and **millennia** are also included.

### 5. Display Results
The `main()` function uses these functions to display each step of the date calculation.

---

## 📋 Code Breakdown
- **Structs and Helper Functions**: For storing and calculating dates accurately.
- **Main Program Flow**:
    - Reads input date.
    - Sequentially subtracts various time units.
    - Displays the updated date after each operation.

---

## ▶️ Sample Execution
Below is an example of what the output might look like:

```plaintext
Please Enter A Day : 1
Please Enter A Month : 1
Please Enter A Year : 2023

Date After :

01-Subtracting One Day is : 31/12/2022
02-Subtracting 10 Days is : 21/12/2022
03-Subtracting One Week is : 14/12/2022
04-Subtracting 10 Weeks is : 05/10/2022
05-Subtracting One Month is : 05/09/2022
06-Subtracting 5 Months is : 05/04/2022
07-Subtracting One Year is : 05/04/2021
08-Subtracting 10 Years is : 05/04/2011
09-Subtracting 10 Years (Faster) is : 05/04/2001
10-Subtracting One Decade is : 05/04/1991
11-Subtracting 10 Decades is : 05/04/1891
12-Subtracting 10 Decades (Faster) is : 05/04/1791
13-Subtracting One Century is : 05/04/1691
14-Subtracting One Millennium is : 05/04/691
