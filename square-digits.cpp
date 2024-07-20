#include <string>
using namespace std;

int main() {
    string output = "";
    for (char c : "123") { 
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    cout << output << endl; 
    return 0;
}