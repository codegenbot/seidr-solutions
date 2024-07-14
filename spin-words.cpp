#include <iostream>
#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    string word = "";

    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' '){
            if(word.length() >= 5){
                result += word;
                word.clear();
                result += " ";
            }else{
                result += word;
                word.clear();
                result += " ";
            }
        }else{
            word += sentence[i];
        }
    }

    if(word.length() >= 5){
        result += word;
    }else{
        result += word;
    }

    return result;
}

int main() {
    string input;
    while(getline(cin, input)){
        cout << spinWords(input) << endl;
    }
    return 0;
}