#include <string>
using namespace std;

string middleCharacter(string s) {
    if (s.length() % 2 == 0) {
        return s.substr((s.length() / 2) - 1, 2);
    } else {
        return s.substr(s.length() / 2, 1);
    }
}