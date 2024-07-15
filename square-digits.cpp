Here is the modified code:

```c++
using namespace std;

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;

    string result = squareDigits(input);

    return 0;

}

string squareDigits(string input) {
    stringstream output;
    for (char c : input) {
        int digit = c - '0';
        output << to_string(digit * digit);
    }
    return output.str();
}