#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[]) {
    if (argc != 4) {
	cout << "Usage: ./calc num1 op num2" << endl;
        return 1;
    }

    double a = atof(argv[1]);
    char op = argv[2][0];
    double b = atof(argv[3]);

    if (op == '+') cout << a + b << endl;
    else if (op == '-') cout << a - b << endl;
    else if (op == '*') cout << a * b << endl;
    else if (op == '/') cout << a / b << endl;
    else cout << "Unknown operator: " << op << endl;
    return 0;
}
