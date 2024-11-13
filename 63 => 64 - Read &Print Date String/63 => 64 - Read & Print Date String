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

    cout << "Please Enter Date dd/mm/yyyy ? ";
    getline(cin >> ws, Date_String);

    return Date_String;
}

vector <string> Split_String(string S1,string Delimiter = "/") {

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


stDate String_To_Date(string Date_String, string Delimiter = "/") {

    stDate Date;
    vector <string> vDate = Split_String(Date_String);

    Date.Day = stoi(vDate[0]);
    Date.Month = stoi(vDate[1]);
    Date.Year = stoi(vDate[2]);

    return Date;
}


string Date_To_String(stDate Date, string Delimiter = "/") {

    return to_string(Date.Day) + Delimiter + to_string(Date.Month) + Delimiter + to_string(Date.Year);
}

int main()
{
    system("color f3");

    string Date_String = Read_String_Date();

    stDate Date = String_To_Date(Date_String); 

    cout << "\n\nDay : " << Date.Day;
    cout << "\nMonth : " << Date.Month;
    cout << "\nYear : " << Date.Year;

    cout << "\n\nU Entered : " << Date_To_String(Date) << endl;   

    system("pause>0");
    return 0;
}
