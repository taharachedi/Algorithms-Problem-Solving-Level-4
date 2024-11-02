# 📅 Problem 14 :Date Equality Checker 
✨ This C++ program allows users to enter two dates and then checks if the dates are identical. It uses a structured approach to store date data and compare each date's day, month, and year fields.

## 🛠️ Features
- 📆 **Date Input**: Enables users to input two complete dates (day, month, year).
- 🔍 **Date Equality Check**: Compares the two dates and confirms if they are equal.
- 👤 **User-Friendly Prompts**: Provides clear prompts for each part of the date, making it easy to use.

## 📚 How It Works
1. 👤 **User Input**: The user is prompted to enter two dates.
2. 📅 **Date Struct**: Dates are stored in a `stDate` struct for efficient access and handling.
3. 🔄 **Equality Function**: The `is_Date1_Equal_Date2` function checks if the two dates are equal based on year, month, and day.

## 🔧 Functions Used
- 📅 **`Read_Day()`**: Prompts the user to enter a day.
- 📆 **`Read_Month()`**: Prompts the user to enter a month.
- 🗓️ **`Read_Year()`**: Prompts the user to enter a year.
- 📅 **`Read_Full_Date()`**: Collects the day, month, and year inputs into a single date structure.
- 🔄 **`is_Date1_Equal_Date2(stDate Date1, stDate Date2)`**: Compares two dates and returns `true` if the dates are identical.

## 🚀 Getting Started

📅 The program will prompt the user to enter two dates and will then display whether the dates are equal.

## ▶️ Execution Example

🎯 If the user enters Date1 as "April 15, 2023" and Date2 as "April 15, 2023," the program will output:
```plaintext


Please Enter A Day : 15
Please Enter A Month : 4
Please Enter A Year : 2023

Please Enter A Day : 15
Please Enter A Month : 4
Please Enter A Year : 2023

Yes, Date1 is Equal To Date2!
