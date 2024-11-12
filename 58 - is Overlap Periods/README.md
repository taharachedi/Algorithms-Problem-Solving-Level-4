# 📅 Problem 58: Period Overlap Checker

> **A C++ program to determine if two date periods overlap.**

## 📘 Project Overview
This C++ program prompts the user to enter two periods (each defined by a start date and an end date) and determines whether these periods overlap. It uses structs to store dates and periods, an enum to handle date comparison, and a function to check for overlap.

---

## 🌟 Features
- **Input for Start and End Dates**: Users can enter the start and end dates for two periods.
- **Period Overlap Checker**:
  - Returns `Yes` if the periods overlap.
  - Returns `No` if the periods do not overlap.
- **Clear Console Output**: Displays whether the periods overlap or not.
- **Struct and Enum-Based Design**: Utilizes a `stDate` struct to store date components, `stPeriod` struct for date periods, and `enDateCompare` enum for comparison clarity.

---

## ⚙️ How It Works

### 1. Structs for Date and Period
- **`stDate`**: Stores individual dates using `Day`, `Month`, and `Year`.
- **`stPeriod`**: Stores periods as `Start_Date` and `End_Date`, each of type `stDate`.

### 2. Input Functions
- **`Read_Day()`**: Asks the user to enter a day.
- **`Read_Month()`**: Asks the user to enter a month.
- **`Read_Year()`**: Asks the user to enter a year.
- **`Read_Full_Date()`**: Collects day, month, and year, returning a complete `stDate`.
- **`Read_Period()`**: Prompts the user to enter a start and end date for a period, returning a `stPeriod`.

### 3. Date Comparison Functions
- **`is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is before `Date2`.
- **`is_Date1_Equal_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is equal to `Date2`.
- **`is_Date1_After_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` is after `Date2`.
- **`Compare_Dates(stDate Date1, stDate Date2)`**: Uses the above functions to return an enum result (`Before`, `Equal`, or `After`) based on date comparison.

### 4. Enum for Date Comparison Result
- **`enDateCompare`**: Provides `Before`, `Equal`, and `After` values to indicate the relationship between two dates.

### 5. Period Overlap Function
- **`is_Overlap_Periods(stPeriod Period1, stPeriod Period2)`**:
  - Uses `Compare_Dates()` to determine if there is no overlap by checking if `Period2` ends before `Period1` starts or if `Period2` starts after `Period1` ends.
  - Returns `true` if there is an overlap, otherwise returns `false`.

### 6. Main Function
- **`main()`**: Executes the program by:
  - Taking user input for two periods.
  - Calling `is_Overlap_Periods()` to determine if the periods overlap.
  - Displaying a result indicating whether the periods overlap or not.

---

## ▶️ Sample Execution
Here’s an example of what the output might look like:

```plaintext
Enter Period 1 :
Enter Start Date :
Please Enter A Day : 12
Please Enter A Month : 8
Please Enter A Year : 2023

Enter End Date :
Please Enter A Day : 18
Please Enter A Month : 8
Please Enter A Year : 2023

Enter Period 2 :
Enter Start Date :
Please Enter A Day : 15
Please Enter A Month : 8
Please Enter A Year : 2023

Enter End Date :
Please Enter A Day : 20
Please Enter A Month : 8
Please Enter A Year : 2023

Yes, Periods Overlap!
