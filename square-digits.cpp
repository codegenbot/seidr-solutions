using namespace std;

string squaredDigitsFunc(string num) {
    string result = "";
    for (char c : num) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    cout << squaredDigitsFunc("17") << endl;
    return 0;
}