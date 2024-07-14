Here's the solution:

#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string temp = "";

    for (int i = 0; i <= str.length(); i++) {
        char c = str[i];
        if (c == ' ') {
            if (temp.length() >= 5)
                result += newString(temp) + " ";
            else
                result += temp + " ";
            temp = "";
        } else
            temp += c;
    }

    if (temp.length() >= 5)
        result += newString(temp);
    else
        result += temp;

    return result;
}

string newString(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--)
        rev += str[i];
    return rev;
}

int main() {
    int n, m;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        cout << spinWords(s) << endl;
    }
    return 0;
}