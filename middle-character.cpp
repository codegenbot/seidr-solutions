#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "abcdef"; // replace with input from user
    int len = str.length();
    if (len % 2 == 0) {
        return str.substr((len / 2) - 1, 2);
    } else {
        return str.substr(len / 2, 1);
    }
}