```cpp
#include <string>
using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int num = (int)c - '0'; 
        result += to_string(num * num); 
    }
    return result;
}

int main() {
    string input = "1234"; 
    cout << squareDigits(input) << endl;
    return 0;
}