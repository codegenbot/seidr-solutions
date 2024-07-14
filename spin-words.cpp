#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str.find(" ", i) == -1 || i + 1 >= str.length())
            break;
        
        string word = str.substr(i, str.find(" ", i) - i);
        if(word.length() >= 5)
            result += string(word.rbegin(), word.rend());
        else
            result += word;
        
        i = str.find(" ", i) + 1;
    }
    
    return result + (str.length() > i ? " " : "") + str.substr(i);
}

int main() {
    // Your code here to test the function.
    return 0;
}