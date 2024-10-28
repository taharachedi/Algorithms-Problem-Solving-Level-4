# 🔢 Problem 1: Number to Text Converter

## 📝 Description
This C++ program converts an integer entered by the user into its textual equivalent. For example, a number like `1234` will be converted to "One Thousand Two Hundred Thirty-Four". It handles numbers up to billions.

The program includes the following features:
- 🔹 `Read_Number`: Prompts the user to enter a number and returns it.
- 🔹 `Number_To_Text`: Converts the number into text, supporting various levels (units, tens, hundreds, thousands, millions, and billions).

## 💡 Code Explanation

- **📥 Function `Read_Number`**:
  - This function prompts the user to enter a number. It uses `cin` to capture the input and returns the entered number as a `long long int` to handle large values.
  - 🖥️ Displays the message: "Please Enter A Number Mr.Taha: "

- **🔠 Function `Number_To_Text`**:
  - This function uses several conditions to transform an integer into text. It includes string arrays for special units and tens.
  
  - **🧮 Case 0 - 19**: Handles numbers from zero to nineteen by using an array (`Arr[]`) that directly maps the numbers to their textual representation. If the number is within this range, it simply returns the corresponding string.
  
  - **🧮 Case 20 - 99**: Handles numbers from twenty to ninety-nine. It divides the number to get the tens and then recursively calls `Number_To_Text` to add any remaining units (if they exist).

  - **🧮 Case 100 - 999**: Handles hundreds. It divides the number to get the hundreds place and then recursively calls `Number_To_Text` for tens and units.

  - **🧮 Case 1,000 - 999,999**: Handles thousands by dividing by 1,000. Calls `Number_To_Text` for the remaining hundreds.

  - **🧮 Case 1,000,000 - 999,999,999**: Handles millions. It divides the number by 1,000,000 and calls `Number_To_Text` for the remainder.

  - **🧮 Case 1,000,000,000 and above**: Handles billions and higher by dividing by 1,000,000,000 and uses recursion to get the remaining part.

- **🖥️ Function `main`**:
  - Changes the console color using `system("color f3")` to improve readability.
  - Calls `Read_Number` to capture the user's input.
  - Displays the result of the conversion by calling `Number_To_Text`.
  - Uses `system("pause>0")` to keep the console open after displaying the result.

## ▶️ Execution Example:
When you enter `1234`, the program displays:
```plaintext
One Thousand Two Hundred Thirty-Four
