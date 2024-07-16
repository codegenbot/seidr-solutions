```c
#include <string>
#include <iostream>

using namespace std;

int main() {
    string n = "12"; // test input
    cout << squareDigits(n) << endl;
    return 0; 
}

std::string squareDigits(std::string n) {
    std::string res = "";
    for (char c : n) {
        int num = c - '0';
        res += to_string(num * num);
    }
    return res;
}