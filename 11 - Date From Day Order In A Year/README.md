# 📆 Problem 11 :Date From Day Order In A Year

✨ This C++ program performs two main functions:
1. Calculates the number of days that have passed since the beginning of a specified year up to a given date.
2. Converts a day's number (order of the day in the year) into a date (day, month, year).

👤 The program interacts with the user to gather the day, month, and year, performs calculations, and displays the results in a clear and structured way.

## 🛠️ Features
- 🗓️ **Leap Year Adjustment**: Considers February as 29 days for leap years, otherwise 28 days.
- 📅 **Days Calculation**: Calculates the total days up to a given date.
- 🔄 **Date Conversion**: Converts the day’s order in the year into a real date (day/month/year).

## 📚 How It Works
1. 👤 **User Input**: The program asks the user to enter the day, month, and year.
2. 🗓️ **Leap Year Check**: Determines if the entered year is a leap year.
3. 📅 **Days Calculation**: Uses `Num_Of_Days_From_The_Beginning_Of_The_Year` to calculate the total days up to the given date.
4. 🔄 **Date Conversion**: Converts the total days into an actual date using `Get_Date_From_Day_Order_In_Year`.

## 🔧 Functions Used
- 📅 **`Read_Day()`**: Asks for and retrieves the day from the user.
- 📆 **`Read_Month()`**: Asks for and retrieves the month from the user.
- 🗓️ **`Read_Year()`**: Asks for and retrieves the year from the user.
- 📅 **`is_Leap_Year(short Year)`**: Checks if a given year is a leap year.
- 📆 **`Num_Of_Days_In_Month(short Month, short Year)`**: Gets the number of days in a month, considering leap years.
- 📅 **`Num_Of_Days_From_The_Beginning_Of_The_Year(short Day, short Month, short Year)`**: Calculates the total days from January to a given date.
- 🔄 **`Get_Date_From_Day_Order_In_Year(short Days_Order_In_Year, short Year)`**: Converts the day’s order in the year into an actual date.


## ▶️ Execution Example

🎯 If the user enters the date "April 15, 2023," here’s an example output:
```plaintext

Please Enter A Day: 15
Please Enter A Month: 4
Please Enter A Year: 2023

The Number Of Days From The Beginning Of The Year is : 105

Date For [105] is : 15/4/2023

