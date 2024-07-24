````
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
        
        // Trim leading and trailing spaces
        word.erase(0, word.find_first_of(" ") == string::npos ? 0 : word.find_first_of(" ")+1); 
        word.pop_back();
        
        if (word.length() >= 5)
            reverse(word.begin(), word.end());
        
        result += word + " ";
        
        start = end + 1;
    }
    
    // Trim leading and trailing spaces from the final string
    result.erase(0, result.find_first_of(" ") == string::npos ? 0 : result.find_first_of(" ")+1); 
    if(result.back() == ' ') result.pop_back();
    
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
```