#include <iostream>
#include <sstream>

int main(int argc, char* argv[]) {
    std::ostringstream oss;
    for (int i = 1; i < argc; ++i) {
        if (i > 1) oss << ' '; // add space between args
        oss << argv[i];
    }

    std::string allArgs = oss.str();
    std::cout << "All args: " << allArgs << std::endl;
}
