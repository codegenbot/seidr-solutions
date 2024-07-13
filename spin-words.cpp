#include <iostream>
#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    string word;
    
    for (char c : sentence) {
        if (c == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += c;
        }
    }
    
    result += word;
    
    istringstream iss(result);
    string temp;
    while (getline(iss, temp, ' ')) {
        if (temp.length() >= 5)
            reverse(temp.begin(), temp.end());
        result = result.substr(0, result.find(temp)) + temp + " ";
    }
    
    return result.substr(0, result.size()-1);
}

int main() {
    cout << spinWords("this is a test") << endl;
    // Your other inputs...
    return 0;
}