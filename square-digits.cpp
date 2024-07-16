using namespace std;

int squareDigits(int n) {
    string res = "";
    while (n > 0) {
        int digit = n % 10;
        res = to_string(digit * digit) + res;
        n /= 10;
    }
    return stoi(res);
}