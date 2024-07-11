#include <string>
using namespace std;

int pairedDigitsSum(string str) {
    int sum = 0;
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i+1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    string str;
    cout << "Enter a string of digits: ";
    cin >> str;
    cout << "Sum of paired digits is: " << pairedDigitsSum(str) << endl;
    return 0;
}