# 📅 Problem 62: Date Validator 

> **A C++ program to validate a given date by checking its correctness according to day, month, year, and leap year rules.**

## 📘 Project Overview
This C++ program allows the user to enter a date (day, month, and year) and then checks if the entered date is valid. It accounts for leap years, month boundaries, and day limits within each month, ensuring the date conforms to the Gregorian calendar rules.

---

## 🌟 Features
- **User-Friendly Date Input**: Prompts the user to enter the day, month, and year of a date.
- **Leap Year Support**: Accurately identifies leap years to correctly validate February dates.
- **Date Validation**: Checks if the date is valid, taking into account month-specific day limits and leap years.
- **Feedback to User**: Outputs whether the entered date is valid or invalid.

---

## ⚙️ How It Works

### 1. Data Structure
- **`stDate`**: A struct for storing a date with three fields:
  - `Day`: Holds the day of the month.
  - `Month`: Holds the month.
  - `Year`: Holds the year.

### 2. Input Functions
- **`Read_Day()`**: Prompts for and reads the day of the date.
- **`Read_Month()`**: Prompts for and reads the month of the date.
- **`Read_Year()`**: Prompts for and reads the year of the date.
- **`Read_Full_Date()`**: Collects day, month, and year values from the user and combines them into a full `stDate` struct.

### 3. Leap Year Function
- **`is_Leap_Year(short Year)`**: Determines if the given year is a leap year by using standard leap year rules:
  - A leap year is divisible by 400, or it is divisible by 4 but not by 100.

### 4. Days in a Month Function
- **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the number of days in a given month, adjusting for February’s day count based on leap year status.

### 5. Date Validation Function
- **`is_Validate_Date(stDate Date)`**: Checks if the date is valid by:
  - Ensuring the day is within acceptable range values for each month.
  - Applying leap year rules for February.
  - Returning `true` if the date is valid, otherwise `false`.

---

## ▶️ Sample Execution
Example of program output:

```plaintext
Please Enter A Day: 29
Please Enter A Month: 2
Please Enter A Year: 2024

Yes, Date is A Valide Date!
