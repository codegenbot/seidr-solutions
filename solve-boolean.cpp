```cpp
#include <sstream>
using namespace std;

bool solveBoolean(const string& s) {
    bool result = true;
    stringstream ss(s);

    for (int i = 0; i < s.size(); ++i) { 
        char c = s[i]; 
        if (c == '|') {
            char ch;
            ss >> noskipws >> ch;
            result = result || (ch == 'T');
        } else if (c == '&') {
            char ch;
            ss >> noskipws >> ch;
            result = result && (ch == 'T');
        }
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    getline(cin, s);
    bool result = solveBoolean(s);
    if (result) {
        cout << "The result is true." << endl;
    } else {
        cout << "The result is false." << endl;
    }
    return 0;
}