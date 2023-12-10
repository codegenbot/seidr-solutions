#include <string>
using namespace std;

string middleCharacter(string input) {
    if (input.length() % 2 == 0) {
        return string(1, input[input.length() / 2 - 1]) + string(1, input[input.length() / 2]);
    } else {
        return string(1, input[input.length() / 2]);
    }
}