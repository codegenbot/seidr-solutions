```c++
#include <string>
using namespace std;

int main() {
    string input = "12345"; 
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    cout << result << endl; 
    return 0;
}