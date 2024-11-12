# 📅 Problem 57: Enhanced Date Comparison Program 

> **A C++ program to compare two dates and determine if the first date is before, after, or equal to the second date using enums.**

## 📘 Project Overview
This program allows users to input two dates, then compares them and returns an enum-based result indicating whether the first date (`Date1`) is before, after, or equal to the second date (`Date2`). This version introduces an `enum` for better clarity and readability of comparison results.

---

## 🌟 Features
- **User Input for Dates**: Prompts the user to enter two dates, including day, month, and year.
- **Date Comparison with Enums**:
  - `Date1` before `Date2` results in `Before`.
  - `Date1` equal to `Date2` results in `Equal`.
  - `Date1` after `Date2` results in `After`.
- **Clear Console Output**: Shows a numeric comparison result from the enum.
- **Enum and Struct-based Design**: Utilizes a `stDate` struct and `enDateCompare` enum to organize dates and comparison results.

---

## ⚙️ How It Works

### 1. Struct for Date
- **`stDate`**: Stores day, month, and year as `Day`, `Month`, and `Year`.

### 2. Input Functions
- **`Read_Day()`**: Prompts the user to enter a day.
- **`Read_Month()`**: Prompts the user to enter a month.
- **`Read_Year()`**: Prompts the user to enter a year.
- **`Read_Full_Date()`**: Collects full date input and stores it in an `stDate` structure.

### 3. Comparison Functions
- **`is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is before `Date2`.
- **`is_Date1_Equal_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is equal to `Date2`.
- **`is_Date1_After_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is after `Date2`.
- **`Compare_Dates(stDate Date1, stDate Date2)`**: Uses the above functions to return an enum result (`Before`, `Equal`, or `After`) based on the date comparison.

### 4. Enum for Comparison Result
- **`enDateCompare`**: Provides `Before`, `Equal`, and `After` values to indicate date relationships.

### 5. Main Function
- **`main()`**: Executes the program by:
  - Taking user input for two dates.
  - Calling `Compare_Dates()` to determine the relationship between `Date1` and `Date2`.
  - Displaying the enum result as a numeric value.

---

## ▶️ Sample Execution
Below is an example of the output that the program might produce:

```plaintext
Enter Date1:
Please Enter A Day : 12
Please Enter A Month : 8
Please Enter A Year : 2023

Enter Date2:
Please Enter A Day : 5
Please Enter A Month : 8
Please Enter A Year : 2023

Compare Result : 1
