```cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        
        if (end == string::npos)
            end = str.length();
        
        string word = str.substr(start, end - start);
        
        if (word.length() >= 5)
            result += (word.rbegin(), word.rend(), 1) + " ";
        else
            result += word + " ";
        
        start = end + 1;
    }
    
    // Remove extra spaces
    result.erase(0, result.find_last_not_of(" "));
    return result.trim();
}

string trim(string s) {
    size_t firstUnseen = s.find_first_not_of(' ');
    if (firstUnseen != string::npos)
        s = s.substr(firstUnseen);
    
    size_t unseen = s.find_last_not_of(' ');
    if (unseen != string::npos)
        s = s.substr(0, unseen + 1);
    return s;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        getline(cin, str);
        if(str == "quit" || str == "exit") break; 
        cout << spinWords(str) << endl;
    }
}