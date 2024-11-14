#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stDate {
    short Day;
    short Month;
    short Year;
};

string Read_String_Date() {
    string Date_String;

    cout << "Please Enter Date dd/mm/yyyy? ";
    getline(cin >> ws, Date_String); 

    return Date_String;    
}

vector<string> Split_String(string S1, string Delimiter = "/") {

    short Pos = 0;
    string Word;

    vector<string>vString;

    while ((Pos = S1.find(Delimiter)) != std::string::npos) {

        Word = S1.substr(0, Pos);

        if (Word != "")
        {
            vString.push_back(Word);
        }

        S1.erase(0, Pos + Delimiter.length());
    }

    if (S1 != "")
    {
        vString.push_back(S1);
    }

    return vString;
}

stDate String_To_Date(string DateString, string Delimiter = "/") {

    vector<string>vDate = Split_String(DateString);
    stDate Date;

    Date.Day = stoi(vDate[0]);
    Date.Month = stoi(vDate[1]);
    Date.Year = stoi(vDate[2]);

    return Date;
}

string Replace_Word_In_String(string S1, string ToReplace, string sReplaceTo) {

    short Pos = 0;

    while ((Pos = S1.find(ToReplace)) != std::string::npos) {

        S1 = S1.replace(Pos, ToReplace.length(), sReplaceTo); 

    }

    return S1;
}

string Format_Date(stDate Date, string DateFormat = "dd/mm/yyyy") {

    string FormattedDateString = "";

    FormattedDateString = Replace_Word_In_String(DateFormat, "dd", to_string(Date.Day));
    FormattedDateString = Replace_Word_In_String(FormattedDateString, "mm", to_string(Date.Month)); 
    FormattedDateString = Replace_Word_In_String(FormattedDateString, "yyyy", to_string(Date.Year)); 

    return FormattedDateString;
}

int main()
{
    system("color f3");

    string Date_String = Read_String_Date();
    stDate Date = String_To_Date(Date_String); 

    cout << endl << Format_Date(Date);
    cout << endl << Format_Date(Date, "yyyy/dd/mm");
    cout << endl << Format_Date(Date, "mm/dd/yyyy");
    cout << endl << Format_Date(Date, "mm-dd-yyyy");
    cout << endl << Format_Date(Date, "dd-mm-yyyy");
    cout << endl << Format_Date(Date, "Day:dd , Month:mm , Year:yyyy ");

    system("pause>0");
    return 0;
}
