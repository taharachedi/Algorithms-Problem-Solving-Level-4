# 📅 Date Manipulation Program (C++)

> **🔄 Increment a given date by specified periods such as days, weeks, months, years, decades, and more!**

## 📘 Project Overview
This C++ program allows users to enter a date and increment it by various time intervals—days, weeks, months, years, and larger periods. It correctly handles leap years, varying month lengths, and year transitions to maintain date accuracy.

---

## 🌟 Features
- **📅 Input a Date**: Users can enter a specific date, including day, month, and year.
- **📆 Date Increment Options**: The program provides multiple options to increment the date by:
  - One day, a specific number of days
  - One week, a specific number of weeks
  - One month, a specific number of months
  - One year, a specific number of years
  - One decade or century, and even a millennium!
- **🔄 Leap Year Awareness**: Adjusts for leap years and varying month lengths.
- **🔢 Flexible Increments**: Allows incrementing the date by custom intervals for different periods (e.g., adding 10 years, 3 weeks).

---

## ⚙️ How It Works
### 1. Date Struct and Utility Functions
- **`struct stDate`**: A structure to store `Day`, `Month`, and `Year`.
- **Date Input Functions**: Functions like `Read_Day`, `Read_Month`, `Read_Year`, and `Read_Full_Date` prompt the user for inputs to create a complete date.
- **Leap Year Checker (`is_Leap_Year`)**: Determines if a given year is a leap year.
- **Days in Month (`Number_Of_Days_In_Month`)**: Returns the correct number of days for a specified month and year, accounting for leap years.

### 2. Date Increment Functions
- **Day Incrementation**:
  - `Increase_Date_By_One_Day`: Adds a single day to the date, adjusting for month and year transitions.
  - `Increase_Date_By_X_Days`: Adds a specified number of days to the date.
- **Week Incrementation**:
  - `Increase_Date_By_One_Week`: Increments the date by one week.
  - `Increase_Date_By_X_Weeks`: Increments the date by a specified number of weeks.
- **Month Incrementation**:
  - `Increase_Date_By_One_Month`: Increments the date by one month, adjusting day count based on month length.
  - `Increase_Date_By_X_Month`: Increments the date by a specified number of months.
- **Year, Decade, and Larger Increments**:
  - Functions to add a year (`Increase_Date_By_One_Year`), decade, century, and millennium are also included.

### 3. Main Function Flow
- The program:
  1. Sets the console color for an enhanced visual experience.
  2. Prompts the user to input a date.
  3. Applies a series of date increments, displaying the results after each operation.

---

## 🛠️ Code Breakdown
### 🔹 Key Components
- **Date Structure (`stDate`)**: Encapsulates day, month, and year.
- **Increment Functions**: Each function performs a specific date manipulation, such as incrementing by days, weeks, or years.
- **Leap Year Awareness**: Ensures that February is accurately counted in leap years, affecting day calculations across months and years.

### Sample Increments
- **One Day Increment**: `Increase_Date_By_One_Day`
- **Ten Days Increment**: `Increase_Date_By_X_Days(Date, 10)`
- **One Month Increment**: `Increase_Date_By_One_Month`

---

## ▶️ Sample Execution
Running the program produces console output similar to this:

```plaintext
Please Enter A Day: 25
Please Enter A Month: 12
Please Enter A Year: 2023

Date After:

01-Adding One Day is: 26/12/2023
02-Adding 10 Days is: 05/01/2024
03-Adding One Week is: 12/01/2024
04-Adding 10 Weeks is: 22/03/2024
05-Adding One Month is: 22/04/2024
06-Adding 5 Months is: 22/09/2024
07-Adding One Year is: 22/09/2025
08-Adding 10 Years is: 22/09/2035
09-Adding 10 Years (Faster) is: 22/09/2045
10-Adding One Decade is: 22/09/2055
11-Adding 10 Decades is: 22/09/2155
12-Adding 10 Decades (Faster) is: 22/09/2255
13-Adding One Century is: 22/09/2355
14-Adding One Millennium is: 22/09/3355
