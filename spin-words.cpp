#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string sentence) {
    string result = "";
    string temp = "";

    for(int i=0; i<sentence.length(); i++) {
        char c = sentence[i];
        if(c == ' ') {
            if(temp.length() >= 5)
                reverse(temp.begin(), temp.end());
            result += temp + " ";
            temp = "";
        } else {
            temp += c;
        }
    }

    if(temp.length() >= 5)
        reverse(temp.begin(), temp.end());

    result += temp;

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; 
    std::cout << spinWords("this is a test") << std::endl; 
    std::cout << spinWords("this is another test") << std::endl; 
    std::cout << spinWords("hi") << std::endl; 

    return 0;
}