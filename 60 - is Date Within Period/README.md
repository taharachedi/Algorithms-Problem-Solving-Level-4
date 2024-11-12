# 📅 Problem 60: is Date Within Period

> **A C++ program to check if a given date falls within a specified period.**

## 📘 Project Overview
This C++ program prompts the user to enter a period defined by a start date and an end date, then checks if a given date falls within this period. The program uses data structures to manage dates and provides advanced date comparison functionality.

---

## 🌟 Features
- **Input for Start and End Dates**: Allows the user to enter start and end dates to define a period.
- **Date Within Period Check**: Verifies if a given date falls within the specified period.
- **Advanced Date Comparison**:
  - **Before**: Checks if a date occurs before the period.
  - **After**: Checks if a date occurs after the period.
  - **Equal**: Checks if a date matches the start or end date of the period.
- **Period Comparison Support**: Uses comparison functions to evaluate the position of a date accurately.

---

## ⚙️ How It Works

### 1. Structs for Date and Period
- **`stDate`**: Stores date details using `Day`, `Month`, and `Year`.
- **`stPeriod`**: Stores two dates (`Start_Date` and `End_Date`) to define a period.

### 2. Input Functions
- **`Read_Day()`**: Prompts the user to enter a day.
- **`Read_Month()`**: Prompts the user to enter a month.
- **`Read_Year()`**: Prompts the user to enter a year.
- **`Read_Full_Date()`**: Combines day, month, and year into a complete `stDate`.
- **`Read_Period()`**: Prompts the user to enter both a start and end date to define a period (`stPeriod`).

### 3. Date Utility Functions
- **`is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` occurs before `Date2`.
- **`is_Date1_Equal_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is the same as `Date2`.
- **`is_Date1_After_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` occurs after `Date2`.

### 4. Date Comparison Enumeration
- **`enDateCompare`**: An enumeration representing the relationship between two dates: Before (-1), Equal (0), After (1).

### 5. Check Date in Period
- **`is_Date_In_Period(stDate Date_To_Check, stPeriod Period)`**:
  - Verifies if the `Date_To_Check` falls within the `Period` (between `Start_Date` and `End_Date`).

### 6. Main Function
- **`main()`**: Runs the program by:
  - Taking user input to define a period.
  - Checking if a given date is within the specified period.
  - Displaying whether the date falls within the period.

---

## ▶️ Sample Execution
Here’s an example of the program's output:

```plaintext
Enter Period:

Enter Start Date:
Please Enter A Day: 1
Please Enter A Month: 3
Please Enter A Year: 2023

Enter End Date:
Please Enter A Day: 15
Please Enter A Month: 3
Please Enter A Year: 2023

Enter Date To Check:
Please Enter A Day: 10
Please Enter A Month: 3
Please Enter A Year: 2023

Yes, Date is Within Period!
