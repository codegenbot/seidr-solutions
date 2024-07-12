#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            count = 0;
            result += " ";
        } else {
            count++;
            if (count >= 5) {
                string temp = str.substr(i-count+1, count);
                for(int j = 0; j < temp.length(); j++){
                    if(j == 0 || j == temp.length() - 1){
                        result += temp[j];
                    } else{
                        result += temp.substr(1, temp.length() - 2);
                    }
                }
            } else {
                result += str[i];
            }
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence (or 'exit' to stop): ";
        cin >> str;
        if (str == "exit") break;
        cout << spinWords(str) << endl;
    }
    return 0;
}