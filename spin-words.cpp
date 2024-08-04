#include <iostream>
#include <string>

using namespace std;

void spinWords() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    string result = "";
    string temp = "";
    
    for (char c : str) {
        if (c == ' ') {
            if (temp.length() >= 5)
                for (int i = temp.length()-1; i >= 0; --i)
                    result += temp[i];
            else
                result += temp;
            temp = "";
        } else {
            temp += c;
        }
    }
    
    // Add the last word to the result, if it's 5 letters or more
    if (temp.length() >= 5)
        for (int i = temp.length()-1; i >= 0; --i)
            result += temp[i];
    else
        result += temp;
    
    cout << "Spinned string: " << result << endl;
}

int main() {
    spinWords();
    return 0;
}