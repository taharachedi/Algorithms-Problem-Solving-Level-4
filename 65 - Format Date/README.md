# 📅 Problem 65: Date Formatter 

> **A C++ program to convert a date string into a structured date format and output it in various formats.**

## 📘 Project Overview
This C++ program allows users to input a date string in the `dd/mm/yyyy` format, converts it to a structured format, and then displays the date in multiple customizable formats. It includes functions for parsing, formatting, and replacing date components in a string.

---

## 🌟 Features
- **Flexible Date Input**: Prompts the user to enter a date in `dd/mm/yyyy` format.
- **Date Parsing**: Splits a date string into day, month, and year components.
- **Custom Date Formatting**: Outputs the date in multiple formats, including `yyyy/dd/mm`, `mm/dd/yyyy`, `mm-dd-yyyy`, etc.
- **String Replacement Utility**: Dynamically replaces parts of the date string based on the selected format.

---

## ⚙️ How It Works

### 1. Data Structure
- **`stDate`**: A struct containing:
  - `Day`: The day part of the date.
  - `Month`: The month part of the date.
  - `Year`: The year part of the date.

### 2. Input Function
- **`Read_String_Date()`**: Reads the user-provided date string in the `dd/mm/yyyy` format.

### 3. String Utility Functions
- **`Split_String(string S1, string Delimiter = "/")`**: 
  - Splits the input date string by the delimiter and stores the results in a vector of strings for further processing.
- **`Replace_Word_In_String(string S1, string ToReplace, string sReplaceTo)`**:
  - Replaces each instance of a substring within the string with a specified replacement, allowing for flexible date formatting.

### 4. Conversion and Formatting Functions
- **`String_To_Date(string DateString, string Delimiter = "/")`**:
  - Converts the date string into a structured `stDate` object by parsing day, month, and year values.
- **`Format_Date(stDate Date, string DateFormat = "dd/mm/yyyy")`**:
  - Formats the `stDate` based on the specified format string. Examples include `dd/mm/yyyy`, `mm-dd-yyyy`, `Day:dd , Month:mm , Year:yyyy`, and more.

---

## ▶️ Sample Execution
Example output of the program:

```plaintext
Please Enter Date dd/mm/yyyy? 15/08/2023

15/08/2023
2023/15/08
08/15/2023
08-15-2023
15-08-2023
Day:15 , Month:08 , Year:2023
