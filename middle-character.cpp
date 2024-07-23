#include <string>
#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    int length = s.length();
    cout << (length % 2 == 0 ? "Middle characters are: " : "Middle character is: ") 
     << (length % 2 ? s.substr(length / 2, 1) : s.substr(length / 2 - 1, 2)) << endl;
    
    return 0;
}