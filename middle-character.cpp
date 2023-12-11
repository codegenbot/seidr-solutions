#include <string>
using namespace std;
string middleCharacter(string str) {
    if (str.length() % 2 == 0) {
        return str.substr((str.length() / 2) - 1, 2);
    } else {
        return str.substr(str.length() / 2, 1);
    }
}