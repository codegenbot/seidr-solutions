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
                string word = "";
                for(int j=i; j>=i-count+1; j--){
                    if(j==i-1 || j==i-count){
                        word=str.substr(i, count)+str[j];
                    }
                    else{
                        word+=str[j];
                    }
                }
                result += word;
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