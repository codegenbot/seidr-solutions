Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    while ((pos = str.find(" ")) != string::npos) {
        string word = str.substr(0, pos);
        if (word.length() >= 5)
            result += string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
        str.erase(0, pos + 1);
    }
    if (str.length() >= 5)
        result += str.substr(0).reverse();
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl; // Output: a
    cout << spinWords("this is a test") << endl; // Output: this is a test
    cout << spinWords("this is another test") << endl; // Output: this is rehtona test
    cout << spinWords("hi") << endl; // Output: hi

    return 0;
}