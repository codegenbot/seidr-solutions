#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    
    while ((pos = str.find(" ")) != string::npos) {
        size_t start = str.find_first_of(" ", 0, pos);
        size_t end = str.find_last_of(" ", pos - 1);
        
        if (end - start + 1 >= 5) {
            reverse(str.begin() + start, str.begin() + end + 1);
        }
        
        result += str.substr(0, pos) + " ";
        str.erase(0, pos + 1);
    }
    
    result += str;
    
    return result;
}

int main() {
    string input;
    while (cin >> input) {
        cout << spinWords(input) << endl;
    }
    return 0;
}