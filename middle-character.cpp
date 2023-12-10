#include <string>
using namespace std;
string middleCharacter(string str) {
    int len = str.length();
    if (len % 2 == 0) {
        return string({str[len / 2 - 1], str[len / 2]});
    } else {
        return string({str[len / 2]});
    }
}