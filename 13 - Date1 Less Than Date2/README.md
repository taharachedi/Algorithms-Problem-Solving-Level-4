# 📅 Date Comparison Program in C++

✨ This C++ program compares two dates entered by the user to determine if the first date is earlier than the second. It uses a structured approach to store and manipulate date data.

## 🛠️ Features
- 📆 **Date Input**: Allows users to enter two complete dates (day, month, year).
- 🔄 **Date Comparison**: Checks if the first date is less than (earlier than) the second date and displays the result.
- 👤 **User-Friendly Prompts**: The program clearly prompts users to enter each part of the date.

## 📚 How It Works
1. 👤 **User Input**: The user is prompted to enter two dates.
2. 📅 **Date Struct**: Dates are stored in a `stDate` struct for easier access and manipulation.
3. 🔄 **Comparison Function**: The `is_Date1_Less_Than_Date2` function compares the two dates based on year, month, and day.

## 🔧 Functions Used
- 📅 **`Read_Day()`**: Prompts the user to enter a day.
- 📆 **`Read_Month()`**: Prompts the user to enter a month.
- 🗓️ **`Read_Year()`**: Prompts the user to enter a year.
- 📅 **`Read_Full_Date()`**: Aggregates day, month, and year inputs into a full date structure.
- 🔄 **`is_Date1_Less_Than_Date2(stDate Date1, stDate Date2)`**: Compares two dates and returns `true` if the first date is earlier than the second, or `false` otherwise.

## 🚀 Getting Started

📅 The program will prompt you to enter two dates and will then display whether the first date is earlier than the second.

## ▶️ Execution Example

🎯 If the user enters Date1 as "April 15, 2023" and Date2 as "May 10, 2023," the program will output:
```plaintext

Please Enter A Day : 15
Please Enter A Month : 4
Please Enter A Year : 2023

Please Enter A Day : 10
Please Enter A Month : 5
Please Enter A Year : 2023

Yes, Date1 is Less Than Date2!
