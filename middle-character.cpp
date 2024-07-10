#include <sstream>
using namespace std;

string middleCharacter(string s) {
    int length = s.length();
    if (length % 2 == 0) {
        return substring(s, length / 2 - 1, 2);
    } else {
        return substring(s, length / 2, 1);
    }
}