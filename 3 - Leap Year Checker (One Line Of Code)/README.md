# 🔢 Problem 3: Leap Year Checker(One Line Of Code)

## 📝 Description
This C++ program checks if a user-inputted year is a leap year. A leap year occurs every four years, except for years divisible by 100 but not by 400. This program includes functions to read a year, determine if it's a leap year, and display the result.

The program includes the following features:
- 🔹 `Read_Year`: Prompts the user to enter a year and returns it.
- 🔹 `is_Leap_Year`: Checks if the entered year meets the conditions for a leap year.

## 💡 Code Explanation

- **📥 Function `Read_Year`**:
  - Prompts the user to enter a year using `cin` and returns the entered value as a `short` integer.
  - 🖥️ Displays the message: "Please Enter A Year To Check: "

- **🔠 Function `is_Leap_Year`**:
  - Uses a concise condition to check if a year is a leap year:
    - Returns `true` if the year is divisible by 400 or divisible by 4 but not by 100.
    - Returns `false` otherwise, as non-leap years do not meet these conditions.

- **🖥️ Function `main`**:
  - Sets the console color with `system("color f3")` for enhanced readability.
  - Calls `Read_Year` to capture the user’s input.
  - Uses `is_Leap_Year` to determine if the year is a leap year and displays the appropriate message.
  - Keeps the console open with `system("pause>0")` to show the result after execution.

## ▶️ Execution Example
If you enter `2024`, the program displays:
```plaintext
Yes, Year [2024] is A Leap Year!
