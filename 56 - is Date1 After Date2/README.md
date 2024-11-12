# 📅 Problem 56: Date Comparison Program 

> **A C++ program to compare two dates and determine if the first date is after, before, or equal to the second date.**

## 📘 Project Overview
This program allows users to input two dates and then compares them to see if the first date (`Date1`) is after, before, or equal to the second date (`Date2`). The program considers year, month, and day in its comparisons, making it a useful tool for date validation and sequencing tasks.

---

## 🌟 Features
- **User Input for Dates**: Allows the user to input two dates (day, month, and year).
- **Date Comparison**:
  - Checks if `Date1` is after `Date2`.
  - Checks if `Date1` is before `Date2`.
  - Checks if `Date1` is equal to `Date2`.
- **Clear Console Output**: Shows result messages indicating the comparison outcome.
- **Simple Struct-based Design**: Uses a `stDate` struct to store dates and comparison functions.

---

## ⚙️ How It Works

### 1. Struct for Date
- **`stDate`**: Stores day, month, and year as `Day`, `Month`, and `Year`.

### 2. Input Functions
- **`Read_Day()`**: Prompts the user to input the day.
- **`Read_Month()`**: Prompts the user to input the month.
- **`Read_Year()`**: Prompts the user to input the year.
- **`Read_Full_Date()`**: Calls `Read_Day()`, `Read_Month()`, and `Read_Year()` and stores the values in an `stDate` structure.

### 3. Comparison Functions
- **`is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is before `Date2`.
- **`is_Date1_Equal_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is equal to `Date2`.
- **`is_Date1_After_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is after `Date2`.

### 4. Main Function
- **`main()`**: Executes the program by:
  - Taking user input for two dates.
  - Calling comparison functions to determine the relationship between `Date1` and `Date2`.
  - Displaying a message based on the comparison result.

---

## ▶️ Sample Execution
Below is an example of the output that the program might produce:

```plaintext
Enter Date 1:
Please Enter A Day : 12
Please Enter A Month : 8
Please Enter A Year : 2023

Enter Date 2:
Please Enter A Day : 5
Please Enter A Month : 8
Please Enter A Year : 2023

Yes, Date1 is After Date2!
