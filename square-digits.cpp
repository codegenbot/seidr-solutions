#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

string squareDigits(string input) {
    string result;
    transform(input.begin(), input.end(), back_inserter(result),
        [&](char c) { return to_string(c-'0' * c-'0'); });
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}