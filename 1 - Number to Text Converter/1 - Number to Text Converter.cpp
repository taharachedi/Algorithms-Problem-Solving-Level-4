#include <iostream>
#include <string>


using namespace std;


long long int Read_Number() {

    long long int Num = 0;

    cout << "Please Enter A Number Mr.Taha : ";
    cin >> Num;

    return Num;
}



string Number_To_Text(long long int Num) {

    if (Num >= 0 && Num <= 19)
    {
        string Arr[] = { "","One","Two","Three","Four","Five","Six","Seven",
            "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen",
            "Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"
        };

        return Arr[Num] + " ";
    }


    if (Num >= 20 && Num <= 99)
    {
        string Arr[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty",
            "Seventy","Eighty","Ninety"
        };

        return Arr[Num / 10] + "-" + Number_To_Text(Num % 10);
    }

    if (Num >= 100 && Num <= 999)
    {
        return Number_To_Text(Num / 100) + " Hundred " + Number_To_Text(Num % 100);
    }


    if (Num >= 1000 && Num <= 999999)
    {
        return Number_To_Text(Num / 1000) + " Thousand " + Number_To_Text(Num % 1000);
    }

    if (Num >= 1000000 && Num <= 999999999)
    {
        return Number_To_Text(Num / 1000000) + " Million " + Number_To_Text(Num % 1000000);
    }
    else
    {
        return Number_To_Text(Num / 1000000000) + " Billion " + Number_To_Text(Num % 1000000000);
    }
}



int main()
{
    system("color f3");

    long long int Number = Read_Number();

    cout << Number_To_Text(Number);

    system("pause>0");
    return 0;
}