#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    string word;

    for (int i = 0; i <= str.length() - 1; i++) {
        if (str[i] == ' ') {
            result += str.substr(i - wordLength + 1, i - wordLength + 1) + " ";
            wordLength = 0;
        } else {
            wordLength++;
        }
    }

    result += str.substr(str.length() - wordLength);

    for(int i = 0; i < result.length(); i++) {
        if(result[i] == ' ') {
            string temp = result.substr(i + 1);
            for(long long j = temp.length() - 1; j >= 0; j--) {
                result.replace(i, temp.length(), temp.substr(j));
                i += temp.length();
                break;
            }
        } else if(result[i+1] == ' ') {
            string temp = result.substr(i + 1);
            for(long long j = temp.length() - 1; j >= 0; j--) {
                result.replace(i + 1, temp.length(), temp.substr(j));
                i += temp.length();
                break;
            }
        }
    }

    for(int i = 0; i < result.length(); i++) {
        if(result[i] == ' ') {
            string temp = result.substr(i + 1);
            if(temp.length() >= 5) {
                for(long long j = temp.length() - 1; j >= 0; j--) {
                    result.replace(i, temp.length() + 1, temp.substr(j));
                    i += temp.length();
                    break;
                }
            } else {
                string word = temp;
                for(long long j = word.length() - 1; j >= 0; j--) {
                    result.replace(i, temp.length() + 1, word.substr(j));
                    i += temp.length();
                    break;
                }
            }
        }
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