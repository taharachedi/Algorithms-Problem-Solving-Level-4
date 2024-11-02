# 📅 Problem 7: Date Day Calculator

## 📝 Description
This C++ program calculates the day of the week for a given date (day, month, year) entered by the user. The program follows these steps:
- Prompts the user to enter a year, month, and day.
- Calculates the day of the week using Zeller's Congruence formula.
- Returns the day's name (e.g., Sun, Mon, Tue) based on the day order calculated.

## 💡 Code Explanation

- **📥 Function `Read_Year`**:
  - Prompts the user to enter a year as a `short` integer and returns it.
  - 🖥️ Displays: "Please Enter A Year :"

- **📅 Function `Read_Month`**:
  - Continuously prompts the user to enter a valid month (1-12) and returns it.
  - 🖥️ Displays: "Please Enter A Month :"

- **📆 Function `Read_Day`**:
  - Continuously prompts the user to enter a valid day (1-31) and returns it.
  - 🖥️ Displays: "Please Enter A Day :"

- **🔢 Function `Day_Of_Week_Order`**:
  - Calculates the day of the week order using Zeller's Congruence. This algorithm determines the day of the week based on year, month, and day.

- **🗓️ Function `Day_ShortName`**:
  - Takes the calculated day order (0-6) and returns the corresponding day name as a string from an array (`"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"`).

- **🖥️ Function `main`**:
  - Sets the console color with `system("color f3")`.
  - Calls `Read_Year`, `Read_Month`, and `Read_Day` to get user input.
  - Displays the entered date, the day order, and the day's name.
  - Uses `system("pause>0")` to keep the console open after displaying the result.

## ▶️ Execution Example
If you enter `2023` for the year, `10` for the month, and `29` for the day, the program will display:
```plaintext
Please Enter A Year : 2023
Please Enter A Month : 10
Please Enter A Day : 29

Date      : 29/10/2023
Day Order : 0
Day Name  : Sun
