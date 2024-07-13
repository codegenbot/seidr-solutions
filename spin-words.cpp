#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while(i <= str.length() - 1) {
        if(str[i] == ' ') {
            result += str.substr(i - (i - i + 1), i - i + 1) + " ";
            i++;
        } else {
            i++;
        }
    }
    
    result += str.substr(i - (i - i));
    
    for(int j = 0; j < result.length(); j++) {
        if(result[j] == ' ') {
            string temp = result.substr(j + 1);
            for(long long k = temp.length() - 1; k >= 0; k--) {
                result.replace(j, temp.length(), temp.substr(k));
                j += temp.length();
                break;
            }
        } else if(result[j+1] == ' ') {
            string temp = result.substr(j + 1);
            for(long long k = temp.length() - 1; k >= 0; k--) {
                result.replace(j + 1, temp.length(), temp.substr(k));
                j += temp.length();
                break;
            }
        } else if(result[j+4] == ' ') {
            string temp = result.substr(j + 1);
            for(long long k = temp.length() - 1; k >= 0; k--) {
                result.replace(j + 1, temp.length(), temp.substr(k));
                j += temp.length();
                break;
            }
        } else {
            i++;
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