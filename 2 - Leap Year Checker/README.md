# 🔢 Problem 2: Leap Year Checker

## 📝 Description
This C++ program determines if a user-inputted year is a leap year. A leap year occurs every four years, except for years divisible by 100 but not by 400. The program includes functions for reading a year, checking if it’s a leap year, and displaying the result.

The program includes the following features:
- 🔹 `Read_Year`: Prompts the user to enter a year and returns it.
- 🔹 `is_Leap_Year`: Checks if the year is a leap year based on divisibility rules.

## 💡 Code Explanation

- **📥 Function `Read_Year`**:
  - This function prompts the user to enter a year. It uses `cin` to capture the input and returns the entered year as a `short` integer, which is sufficient for common years.
  - 🖥️ Displays the message: "Please Enter A Year : "

- **🔠 Function `is_Leap_Year`**:
  - This function checks if a year is a leap year by applying three divisibility conditions:
  
    - **🧮 Case 1**: If the year is divisible by 400, it is a leap year.
    - **🧮 Case 2**: If the year is divisible by 100 but not by 400, it is not a leap year.
    - **🧮 Case 3**: If the year is divisible by 4 but not by 100, it is a leap year.
    - **🧮 Case 4**: All other years are not leap years.

- **🖥️ Function `main`**:
  - Sets the console color with `system("color f3")` for readability.
  - Calls `Read_Year` to capture the user’s input.
  - Uses `is_Leap_Year` to determine and display the result.
  - Uses `system("pause>0")` to keep the console open after the result is shown.

## ▶️ Execution Example
If you enter `2024`, the program displays:
```plaintext
Yes, Year [2024] is A Leap Year!
