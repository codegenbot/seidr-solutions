#include <iostream>
using namespace std;

int getSum(string str) {
    int sum = 0;
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    string input;
    cin >> input;
    int result = getSum(input);
    cout << "Sum: " << result << endl;
    return 0;
}