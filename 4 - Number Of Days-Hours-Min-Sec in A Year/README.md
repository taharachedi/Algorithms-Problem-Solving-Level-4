# 🔢 Problem: Year Details Calculator

## 📝 Description
This C++ program calculates various time units (days, hours, minutes, and seconds) in a given year entered by the user. It checks if the year is a leap year to determine whether it has 365 or 366 days and then uses this information to calculate the corresponding hours, minutes, and seconds.

The program includes the following features:
- 🔹 `Read_Year`: Prompts the user to enter a year and returns it.
- 🔹 `is_Leap_Year`: Checks if the entered year is a leap year.
- 🔹 `Num_Of_Days_In_Year`: Returns the number of days in the year.
- 🔹 `Num_Of_Hours_In_Year`: Calculates the number of hours in the year.
- 🔹 `Num_Of_Minutes_In_Year`: Calculates the number of minutes in the year.
- 🔹 `Num_Of_Seconds_In_Year`: Calculates the number of seconds in the year.

## 💡 Code Explanation

- **📥 Function `Read_Year`**:
  - Prompts the user to enter a year with `cin` and returns it as a `short` integer.
  - 🖥️ Displays: "Please Enter A Year To Check:"

- **🔠 Function `is_Leap_Year`**:
  - Checks if a year is a leap year by returning `true` if the year is divisible by 400 or by 4 but not 100; otherwise, it returns `false`.

- **🔢 Function `Num_Of_Days_In_Year`**:
  - Calls `is_Leap_Year` to determine the number of days in the year, returning 366 if it's a leap year or 365 if it's not.

- **⏳ Function `Num_Of_Hours_In_Year`**:
  - Multiplies the number of days by 24 to calculate the total hours.

- **🕑 Function `Num_Of_Minutes_In_Year`**:
  - Multiplies the total hours by 60 to calculate the total minutes.

- **🕰️ Function `Num_Of_Seconds_In_Year`**:
  - Multiplies the total minutes by 60 to calculate the total seconds.

- **🖥️ Function `main`**:
  - Sets the console color with `system("color f3")`.
  - Calls `Read_Year` to capture the user's input.
  - Displays the calculated number of days, hours, minutes, and seconds in the entered year.
  - Uses `system("pause>0")` to keep the console open after displaying the results.

## ▶️ Execution Example
If you enter `2024`, the program will display:
```plaintext
-----------------------------------------------------------

Number Of Days    In Year [2024] is : 366
Number Of Hours   In Year [2024] is : 8784
Number Of Minutes In Year [2024] is : 527040
Number Of Seconds In Year [2024] is : 31622400

-----------------------------------------------------------
