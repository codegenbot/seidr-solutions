#include <iostream>
#include <string>

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
            result += string(rbegin(word), rend(word)) + " ";
        else
            result += word + " ";
        
        start = end + 1;
    }
    
    // Remove extra spaces
    result.erase(0, result.find_last_of(" ") + 1);
    return result;
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