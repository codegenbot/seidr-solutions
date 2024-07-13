#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

auto spinWords(string str) -> string {
    vector<string> words {str};
    
    for(int i=0; i<words.size(); i++) {
        if(words[i].length() >= 5) {
            reverse(words[i].begin(), words[i].end());
        }
        
        cout << words[i] << " ";
    }
    
    return "";
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str);
}
