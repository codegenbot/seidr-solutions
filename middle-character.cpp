#include <string>
using namespace std;

string middleCharacter(string s) {
    int length = s.length();
    if (length % 2 == 0) { // even length
        return s.substr(length / 2 - 1, 2);
    } else { // odd length
        return s.substr(length / 2, 1);
    }