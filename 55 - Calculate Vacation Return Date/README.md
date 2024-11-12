# 🗓️ Problem 55: Vacation Days Calculator 

> **A C++ program to calculate the end date of a vacation, taking only business (non-weekend) days into account.**

## 📘 Project Overview
This program allows users to input a start date and a vacation length (in days). It then calculates the actual return date by skipping weekends. The program accurately handles date transitions, including month-end, year-end, and leap years.

---

## 🌟 Features
- **User Input for Date**: Prompts the user to enter the vacation start date and the desired length of vacation in days.
- **Weekend Skipping**: Automatically skips weekends, ensuring only business days are counted.
- **Leap Year Calculation**: Identifies leap years for accurate handling of February.
- **Date Manipulation**: Increments dates correctly across days, months, and years.
- **Display of Results**: Outputs the vacation start date and calculated return date, including the day of the week for each.

---

## ⚙️ How It Works
### 1. Struct for Date
- **`stDate`**: Stores day, month, and year as `Day`, `Month`, and `Year`.

### 2. Input Functions
- **`Read_Full_Date()`**: Prompts the user to enter the start date (day, month, and year) and stores it in an `stDate` structure.
- **`Read_Vacation_Day()`**: Prompts the user to enter the vacation length in days.

### 3. Utility Functions
- **`is_Leap_Year(short Year)`**: Checks if a given year is a leap year to handle February dates accurately.
- **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the number of days in a given month, accounting for leap years.
- **`Day_Of_Week_Order(...)`**: Calculates the day of the week for a specific date, used to check if a date is a weekend.

### 4. Date Manipulation Functions
- **`Increase_Date_By_One_Day(...)`**: Advances a date by one day, rolling over months and years as needed.
- **`is_Weekend(...)`**: Checks if a date falls on a weekend (Friday or Saturday).
- **`is_Business_Day(...)`**: Returns `true` if the day is a business day (Monday to Thursday).

### 5. Main Calculation Function
- **`Calculate_Vacation_Return_Date(...)`**: Determines the return date by iterating over each day from the start date and counting only business days.

---

## ▶️ Sample Execution
Below is an example of the output the program might produce:

```plaintext
Vacation Starts: 
Please Enter A Day : 10
Please Enter A Month : 10
Please Enter A Year : 2023

Please Enter Vacation Day: 5

Return Date: Tue, 17/10/2023
