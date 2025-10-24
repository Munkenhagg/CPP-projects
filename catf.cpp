#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }
    ifstream file(argv[1]);

    if (!file) {
	cerr << "Cannot open file: " << argv[1] << endl;
	return 1;
    }

    string word;
    int count = 1;
    while (file >> word) {
	cout << count << ". " << word << endl;
	count++;
    }
    file.close();
    return 0;
}
