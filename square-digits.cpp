#include <string>
using namespace std;

int main() {
    string input = "12345"; 
    for (char c : input) {
        int digit = c - '0';
        cout << to_string(digit * digit);
    }
    cout << endl; 
    return 0;
}