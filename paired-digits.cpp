```cpp
#include <iostream>
using namespace std;

int sumPairedDigits(string str) {
    int sum = 0;
    for(int i=0; i < str.length() - 1; i++) { 
        if(str[i] == str[i+1]) { 
            sum += (str[i]-'0') + (str[i+1]-'0'); 
        }
    }
    return sum;
}

int main() {
    string str;
    cin >> str;
    cout << "Sum of paired digits: " << sumPairedDigits(str) << endl;
    return 0;
}