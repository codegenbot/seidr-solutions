#include <iostream>
#include <string>

using namespace std;

string middleCharacter(string s) {
    int length = s.length();
    if (length % 2 == 0) {
        return s.substr(length / 2 - 1, 2);
    } else {
        return to_string(s[length / 2]);
    }
}