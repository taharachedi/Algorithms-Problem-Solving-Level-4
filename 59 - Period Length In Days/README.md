# 📅 Problem 59: Period Length Calculator 

> **A C++ program to calculate the length of a given date period in days.**

## 📘 Project Overview
This C++ program prompts the user to enter a period defined by a start date and an end date, then calculates and displays the length of this period in days. The program takes leap years into account and provides options to include or exclude the end date from the calculation.

---

## 🌟 Features
- **Input for Start and End Dates**: Users enter the start and end dates for a period.
- **Period Length Calculator**:
  - Calculates the difference in days between two dates.
  - Optionally includes the end date in the period length.
- **Leap Year Support**: Correctly accounts for leap years when calculating days in February.
- **Date Incrementation**: Handles date changes across months and years seamlessly.

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
- **`Read_Period()`**: Prompts the user to enter both a start and end date for a `stPeriod`.

### 3. Date Utility Functions
- **`is_Leap_Year(short Year)`**: Returns `true` if the specified year is a leap year, otherwise `false`.
- **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the number of days in a given month, considering leap years for February.
- **`is_Last_Day_In_Month(stDate Date)`**: Checks if the date is the last day of its month.
- **`is_Last_Month_In_Year(short Month)`**: Checks if the month is December.
- **`Increase_Date_By_One_Day(stDate Date)`**: Advances the date by one day, managing month and year transitions as necessary.

### 4. Date Comparison
- **`is_Date1_Before_Date2(stDate Date1, stDate Date2)`**: Checks if `Date1` occurs before `Date2`.

### 5. Period Length Calculation
- **`Get_Difference_In_Days(stDate Date1, stDate Date2, bool IncludeEndDay = false)`**:
  - Calculates the number of days from `Date1` to `Date2`.
  - The optional `IncludeEndDay` parameter, when set to `true`, includes the end date in the calculation.
- **`Period_Length_In_Days(stPeriod Period, bool IncludeEndDate = false)`**:
  - Calculates the length of `Period` (the number of days from `Start_Date` to `End_Date`).
  - The `IncludeEndDate` parameter allows for inclusion of the end date in the length calculation.

### 6. Main Function
- **`main()`**: Executes the program by:
  - Taking user input for a period.
  - Calculating and displaying the period length with and without including the end date.

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
Please Enter A Day : 15
Please Enter A Month : 8
Please Enter A Year : 2023

Period Length is : 3
Period Length (Including End Date) is : 4
