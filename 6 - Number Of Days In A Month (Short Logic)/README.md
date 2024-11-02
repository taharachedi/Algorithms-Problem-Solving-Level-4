# 📅 Problem 6: Month Days Calculator


## 📝 Description
This C++ program calculates the number of days in a specified month for a given year entered by the user. It checks whether the year is a leap year to correctly determine the days in February (28 or 29), and displays the number of days in the month accordingly.

The program includes the following functions:
- 🔹 `Read_Year`: Prompts the user to enter a year and returns it.
- 🔹 `Read_Month`: Prompts the user to enter a valid month (1-12) and returns it.
- 🔹 `is_Leap_Year`: Checks if the entered year is a leap year.
- 🔹 `Num_Of_Days_In_A_Month`: Returns the number of days in the specified month, accounting for leap years if the month is February.

## 💡 Code Explanation

- **📥 Function `Read_Year`**:
  - Prompts the user to enter a year using `cin` and returns it as a `short` integer.
  - 🖥️ Displays: "Please Enter A Year To Check :"

- **📅 Function `Read_Month`**:
  - Continuously prompts the user to enter a month until a valid month (1-12) is provided and returns it.
  - 🖥️ Displays: "Please Enter A Month To Check :"

- **🔠 Function `is_Leap_Year`**:
  - Checks if a year is a leap year by returning `true` if the year is divisible by 400 or by 4 but not 100; otherwise, it returns `false`.

- **🔢 Function `Num_Of_Days_In_A_Month`**:
  - Determines the number of days in the specified month. For February, it returns 29 if it's a leap year and 28 otherwise. For other months, it uses an array to return the corresponding days (31 or 30).

- **🖥️ Function `main`**:
  - Sets the console color with `system("color f3")`.
  - Calls `Read_Year` and `Read_Month` to capture the user's input.
  - Displays the calculated number of days in the specified month of the entered year.
  - Uses `system("pause>0")` to keep the console open after displaying the result.

## ▶️ Execution Example
If you enter `2024` for the year and `2` for the month, the program will display:
```plaintext
Please Enter A Year To Check : 2024

Please Enter A Month To Check : 2

The Number Of Days In Month [2] is : 29
