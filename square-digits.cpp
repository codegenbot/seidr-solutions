using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int num = c - '0';
        output += to_string(num * num);
    }
    return output;