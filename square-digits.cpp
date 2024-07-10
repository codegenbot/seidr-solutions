```cpp
#include <string>
using namespace std;

int main() {
    cout << squareDigits("123") << endl;
    return 0;
}

string squareDigits(string input) {
    string output = "";
    for (char c : input) { 
        int digit = (c - '0') * (c - '0'); 
        char temp = '0' + digit / 10; // convert the squared number to character
        output += temp;
        if(digit % 10 != 0) {
            temp = '0' + digit % 10;
            output += temp;
        }
    }
    return output;
}