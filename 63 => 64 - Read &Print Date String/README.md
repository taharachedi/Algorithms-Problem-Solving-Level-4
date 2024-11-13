# 📅 Problem 63 To 64: Read/Print Date String

> **A C++ program to convert date strings into structured dates and vice versa.**

## 📘 Project Overview
This C++ program reads a date string in the `dd/mm/yyyy` format, converts it into a structured date format, and then reconstructs the date back into a string. The program uses custom structures and functions for date string manipulation, including splitting, parsing, and formatting.

---

## 🌟 Features
- **String Date Input**: Prompts the user to enter a date string in `dd/mm/yyyy` format.
- **String Splitting Utility**: Uses a customizable delimiter to split date strings into day, month, and year.
- **String-to-Date Conversion**: Converts a date string into a structured `stDate`.
- **Date-to-String Conversion**: Formats a structured `stDate` back into a string.
- **User-Friendly Output**: Displays each component (day, month, year) individually and then reconstructs the date string.

---

## ⚙️ How It Works

### 1. Data Structure
- **`stDate`**: A struct with three fields to represent a date:
  - `Day`: Holds the day value.
  - `Month`: Holds the month value.
  - `Year`: Holds the year value.

### 2. Input Function
- **`Read_String_Date()`**: Prompts for and reads the date as a string from the user in the `dd/mm/yyyy` format.

### 3. String Utility Functions
- **`Split_String(string S1, string Delimiter = "/")`**: 
  - Splits a string based on the specified delimiter and returns the resulting parts as a vector of strings.
  - This function is used to split the date string into day, month, and year components.

### 4. Conversion Functions
- **`String_To_Date(string Date_String, string Delimiter = "/")`**:
  - Converts a string in `dd/mm/yyyy` format into a structured `stDate`.
  - Uses `Split_String()` to parse the day, month, and year.
- **`Date_To_String(stDate Date, string Delimiter = "/")`**:
  - Reconstructs an `stDate` back into a string with a customizable delimiter.

---

## ▶️ Sample Execution
Example output of the program:

```plaintext
Please Enter Date dd/mm/yyyy ? 15/08/2023

Day : 15
Month : 8
Year : 2023

U Entered : 15/8/2023
