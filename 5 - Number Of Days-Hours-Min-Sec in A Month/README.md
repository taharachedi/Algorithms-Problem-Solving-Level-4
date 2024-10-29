# 📅 Problem 5: Month Details Calculator

## 📝 Description
This C++ program calculates various time units (days, hours, minutes, and seconds) in a specified month of a given year entered by the user. It checks if the year is a leap year to determine whether February has 28 or 29 days and uses this information to calculate the corresponding hours, minutes, and seconds.

The program includes the following features:
- 🔹 `Read_Year`: Prompts the user to enter a year and returns it.
- 🔹 `Read_Month`: Prompts the user to enter a valid month (1-12) and returns it.
- 🔹 `is_Leap_Year`: Checks if the entered year is a leap year.
- 🔹 `Num_Of_Days_In_Month`: Returns the number of days in the specified month of the year.
- 🔹 `Num_Of_Hours_In_Month`: Calculates the number of hours in the specified month.
- 🔹 `Num_Of_Minutes_In_Month`: Calculates the number of minutes in the specified month.
- 🔹 `Num_Of_Seconds_In_Month`: Calculates the number of seconds in the specified month.

## 💡 Code Explanation

- **📥 Function `Read_Year`**:
  - Prompts the user to enter a year using `cin` and returns it as a `short` integer.
  - 🖥️ Displays: "Please Enter A Year To Check:"

- **📅 Function `Read_Month`**:
  - Continuously prompts the user to enter a month until a valid month (1-12) is provided and returns it.

- **🔠 Function `is_Leap_Year`**:
  - Checks if a year is a leap year by returning `true` if the year is divisible by 400 or by 4 but not 100; otherwise, it returns `false`.

- **🔢 Function `Num_Of_Days_In_Month`**:
  - Determines the number of days in the specified month. It returns 29 for February if it's a leap year, 28 if not, 31 for months with 31 days, and 30 for others.

- **⏳ Function `Num_Of_Hours_In_Month`**:
  - Multiplies the number of days in the month by 24 to calculate the total hours.

- **🕑 Function `Num_Of_Minutes_In_Month`**:
  - Multiplies the total hours by 60 to calculate the total minutes.

- **🕰️ Function `Num_Of_Seconds_In_Month`**:
  - Multiplies the total minutes by 60 to calculate the total seconds.

- **🖥️ Function `main`**:
  - Sets the console color with `system("color f3")`.
  - Calls `Read_Year` and `Read_Month` to capture the user's input.
  - Displays the calculated number of days, hours, minutes, and seconds in the specified month of the entered year.
  - Uses `system("pause>0")` to keep the console open after displaying the results.

## ▶️ Execution Example
If you enter `2024` for the year and `2` for the month, the program will display:
```plaintext
------------------------------------------

Number Of Days    In Month [2] : 29
Number Of Hours   In Month [2] : 696
Number Of Minutes In Month [2] : 41760
Number Of Seconds In Month [2] : 2505600

------------------------------------------
