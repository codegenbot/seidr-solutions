#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    string word, result;
    istringstream iss(input);
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    result.pop_back();
    cout << result << endl;
    return 0;
}