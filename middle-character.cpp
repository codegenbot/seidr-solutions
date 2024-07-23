```c++
#include <string>
using namespace std;

string middleCharacter(string str) {
    int len = str.length();
    if(len % 2 != 0) {
        return string(1, str[len/2]);
    } else {
        return string(1, str[(len-1)/2]) + string(1, str[(len+1)/2]);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string result = middleCharacter(input);
    cout << "Middle character(s): " << result << endl;
    return 0;
}