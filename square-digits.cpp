```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    string result = "";
    while (num > 0) {
        int digit = num % 10;
        long long square = static_cast<long long>(digit) * static_cast<long long>(digit);
        result = to_string(square) + result;
        num /= 10;
    }
    
    cout << "Squared digits: " << result << endl;
    return 0;
}