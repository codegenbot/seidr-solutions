using namespace std;

int squareDigits(string input) {
    string res = "";
    for (char c : input) {
        int num = c - '0';
        res += to_string(num * num);
    }
    return stoi(res);
}