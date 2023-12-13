```cpp
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

string squareDigits(int num) {
    string result = "";
    while (num > 0) {
        int digit = num % 10;
        result = to_string(digit * digit) + result;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    cin >> num;
    cout << squareDigits(num) << '\n';
    return 0;
}
```