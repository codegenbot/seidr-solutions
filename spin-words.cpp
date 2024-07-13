#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string temp = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (temp.length() >= 5)
                result += string(temp.rbegin(), temp.rend()) + " ";
            else
                result += temp + " ";
            temp = "";
        } else
            temp += str[i];
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}