```c++
#include <iostream>
#include <algorithm>
using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for(int end = 0; end <= str.length(); end++){
        if(end == str.length() || str[end] == ' '){
            string word = str.substr(start, end - start);
            if(word.length() >= 5)
                result.append(string(word.rbegin(), word.rend()) + " ");
            else
                result.append(word + " ");
            start = end + 1;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);
    cout << "Spun result: " << spinWords(str) << endl;
    return 0;
}