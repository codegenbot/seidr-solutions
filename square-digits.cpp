using namespace std;

string squareDigits(string n) {
    string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    string input = "14";
    cout << squareDigits(input) << endl;
    return 0;
}