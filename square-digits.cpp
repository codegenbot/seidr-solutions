using namespace std;

int squareDigits(string num) {
    string res = "";
    for (char c : num) {
        int digit = c - '0';
        res += to_string(digit * digit);
    }
    return stoi(res);
}