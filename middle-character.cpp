#include <iostream>
#include <string>

using namespace std;

string middleCharacter(string s) {
    int len = s.length();
    if(len % 2 == 1) {
        return s.substr(len/2, 1);
    } else {
        return s.substr(len/2 - 1, 2);
    }
}