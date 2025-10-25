#include <iostream>
#include <string>

using namespace std;

int main() {
    string brightRed = "\033[1;91m";
    string resetColor = "\033[0m";
    double currentmoney = 0.0;
    string opt;
    double moneyinput;
    while (true) {
	cout << "\n\n\n";
        cout << "---Bank---\n";
        cout << "1. deposit\n";
        cout << "2. withdraw\n";
        cout << "3. amount\n";
        cout << "Please choose an option and a value\n";
        cout << "----------\n\n";
	cout << "opt>";
        cin >> opt;
	if (opt != "3") {
	    cout << "\nval>";
	    cin >> moneyinput;
	}

        if (opt == "1" || opt == "deposit") {
            if (moneyinput > 0) currentmoney += moneyinput;
            else cout << brightRed << "Nothing to deposit!\n" << resetColor;
        }
        else if (opt == "2" || opt == "withdraw") {
	    if (moneyinput > 0) {
	        if (moneyinput <= currentmoney) currentmoney -= moneyinput;
	        else cout << brightRed << "Not enough funds!\n" << resetColor;
	    }
	    else {
	        cout << brightRed << "Nothing to withdraw!\n" << resetColor;
	    }
        }
        else if (opt == "3" || opt == "amount") cout << "Balance: " << currentmoney << endl;
        else cout << brightRed << opt << " is not recognized as an option!" << resetColor;
    }
    return 0;
}
