#include <iostream>
using namespace std;

string middleCharacter(string s);

string middleCharacter(string s) {
    int n = s.size();
    if (n % 2 == 0) {
        return s.substr(n / 2 - 1, 2);
    } else {
        return s.substr(n / 2, 1);
    }
}

int main() {
    string s;
    std::cin >> s;
    std::cout << middleCharacter(s) << std::endl;
    return 0;
}