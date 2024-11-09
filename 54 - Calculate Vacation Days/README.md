# 🗓️ Problem 54: Vacation Days Calculator 

> **A C++ program to calculate the number of business (non-weekend) days between two user-entered dates.**

## 📘 Project Overview
This program allows users to input two dates representing the start and end of a vacation. It then calculates the number of actual vacation days, counting only business days and excluding weekends. The program handles leap years and varying month lengths, ensuring accurate date calculations.

---

## 🌟 Features
- **User Input for Date**: Prompts the user to enter the start and end dates of the vacation.
- **Leap Year Calculation**: Determines leap years to handle February dates accurately.
- **Business Days Calculation**: 
  - Skips weekends (Saturday and Sunday).
  - Counts only business days (Monday to Friday).
- **Date Manipulation**: Increments dates correctly across days, months, and years.
- **Display of Results**: Outputs the vacation duration, start, and end dates, showing weekday names for both.

---

## ⚙️ How It Works
### 1. Struct for Date
- **`stDate`**: Stores day, month, and year.

### 2. Input Functions
- **`Read_Full_Date()`**: Prompts the user to enter day, month, and year values and stores them in an `stDate` structure.

### 3. Utility Functions
- **`is_Leap_Year(short Year)`**: Determines if a given year is a leap year.
- **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the number of days in a specified month, accounting for leap years.
- **`Day_Of_Week_Order(...)`**: Calculates the day of the week for a given date, used to determine weekends.

### 4. Date Manipulation Functions
- **`Increase_Date_By_One_Day(...)`**: Advances a date by one day.
- **`is_Date1_Before_Date2(...)`**: Checks if one date occurs before another, used to iterate between dates.
- **`is_Business_Day(...)`**: Returns `true` if the date falls on a weekday.

### 5. Main Calculation Function
- **`Calculate_Vacation_Days(...)`**: Iterates from the start to the end date, counting only business days as vacation days.

---

## ▶️ Sample Execution
Below is an example of the output that the program might produce:

```plaintext
Vacation Starts : 
Please Enter A Day : 1
Please Enter A Month : 1
Please Enter A Year : 2023

Vacation Ends : 
Please Enter A Day : 15
Please Enter A Month : 1
Please Enter A Year : 2023

Vacation From : Sun , 1/1/2023
Vacation To : Sun , 15/1/2023

Actual Vacation Days is : 10
