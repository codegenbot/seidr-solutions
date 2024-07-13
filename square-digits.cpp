```c++
#include <string>
using namespace std;

int main() {
    string input = "493193";
    cout << squareDigits(input) << endl;
    return 0;
}

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int num = (int)(c - '0'); 
        output += to_string(num * num); 
    }
    return output;
}