
#include <string>
using namespace std;
string middleCharacter(string input) {
    if (input.length() % 2 == 0) {
        return input.substr((input.length() / 2) - 1, 2);
    } else {
        return input.substr(input.length() / 2, 1);
    }
}