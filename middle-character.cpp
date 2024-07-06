#include <iostream>
#include <string>
using namespace std;
void main() {
    string str = "abcdef"; // replace with input from user
    int len = str.length();
    if (len % 2 == 0) {
        std::cout << str.substr((len / 2) - 1, 2);
    } else {
        std::cout << str.substr(len / 2, 1);
    }
}