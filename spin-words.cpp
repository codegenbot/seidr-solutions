#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string temp = "";

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            temp = (temp.length() >= 5) ? std::string(temp.rbegin(), temp.rend()) : temp;
            result += temp;
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