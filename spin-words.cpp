````
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string temp = "";

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            if (temp.length() >= 5) {
                for (int j = temp.length() - 1; j >= 0; j--)
                    result += temp[j];
            } else
                result += temp;
            temp = "";
        } else
            temp += str[i];
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    string output = spinWords(input);
    cout << "Result: " << output << endl;
    return 0;
}
```