#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int len = s.length();
    if (len % 2 == 0) {
        res = s.substr(len / 2 - 1, 1).str;
        res += s.substr(len / 2, 1).str;
        cout << "Middle characters are: " << res << endl;
    } else {
        res = s.substr(len / 2, 1).str;
        cout << "Middle character is: " << res << endl;
    }
    
    return 0;
}