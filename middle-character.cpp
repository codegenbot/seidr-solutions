#include <string>
#include <iostream>

int main() {
    using namespace std;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int length = s.length();
    if (length % 2 == 0) {
        string middle = s.substr(length / 2 - 1, 2);
        cout << "Middle characters are: " << middle << endl;
    } else {
        string middle = s.substr(length / 2, 1);
        cout << "Middle character is: " << middle << endl;
    }
    
    return 0;
}