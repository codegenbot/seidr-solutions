using namespace std;

string squareDigits(string inputStr) {
    string res = "";
    for (char c : inputStr) {
        int num = c - '0';
        res += to_string(num * num);
    }
    return res;