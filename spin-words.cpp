#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    while((pos = str.find(" ")) != string::npos) {
        string word = str.substr(0, pos);
        if(word.length() >= 5)
            result += string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
        str.erase(0, pos+1);
    }
    result += str;
    return result;
}

int main() {
    // Your code to read from input and write to output.
    // For example:
    string str;
    cin >> str;
    cout << spinWords(str) << endl;
    
    return 0;
}