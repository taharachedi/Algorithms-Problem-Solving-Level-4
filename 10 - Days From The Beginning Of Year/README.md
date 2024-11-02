# 📅 Problem 10 :Calculate Days from the Beginning of the Year 

This simple C++ program calculates the number of days that have passed from the beginning of a specified year up to a given date. The user is prompted to enter a day, month, and year, and the program calculates the total days based on leap year adjustments and the number of days in each month.

## ✨ Features
- 🗓️ **Leap Year Adjustment**: Correctly considers February as 29 days for leap years, otherwise 28 days.
- 📅 **Date Validation**: Calculates the total days up to the entered date, accounting for month and year specifics.
- 👤 **User Interaction**: Simple user prompts for day, month, and year.

## 📚 How It Works
1. **User Input**: The program requests the user to enter a day, month, and year.
2. **Leap Year Check**: Determines if the specified year is a leap year.
3. **Days Calculation**: Using the entered day and month, the program adds the days from each month up to the specified date and outputs the result.

## 🔧 Functions Used
- **`Read_Year()`**: 🗓️ Prompts the user to enter a year.
- **`Read_Month()`**: 📅 Prompts the user to enter a month.
- **`Read_Day()`**: 📆 Prompts the user to enter a day.
- **`is_Leap_Year(short Year)`**: Checks if the given year is a leap year.
- **`Num_Of_Days_In_Month(short Month, short Year)`**: Returns the number of days in a given month, adjusting for leap years in February.
- **`Number_Of_Days_From_The_beginning_Of_Year(short Day, short Month, short Year)`**: Calculates the total days from the beginning of the year to the specified date.



## ▶️ Execution Example

Below is an example of what the program output might look like if the user enters the date "March 15, 2024"

```plaintext

Please Enter A Day: 15
Please Enter A Month: 3
Please Enter A Year: 2024

Number Of Days From The Beginning Of The Year is : 75
