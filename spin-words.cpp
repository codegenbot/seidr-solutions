#include <iostream>
#include <string>
using namespace std;

int main() {
    string input = "this is another test";
    int len = 5;
    int i = 0;
    while (i < input.length()) {
        if (input[i] != ' ') {
            int j = i + 1;
            while (j < input.length() && input[j] != ' ') {
                j++;
            }
            if (j - i >= len) {
                reverse(input.begin() + i, input.begin() + j);
            }
        }
        i = j;
    }
    cout << "The resulting string is: " << input << endl;
    return 0;
}