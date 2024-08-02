#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            i++; // Skip &
            if (s[i] == 'F') {
                return false; // If & operator is followed by F, result is F
            }
        } else if (s[i] == '|') {
            i++; // Skip |
            if (s[i] == 'F') {
                return false; // If | operator is followed by F, result is F
            }
        } 
        i++;
    }
    return true;
}

int main() {
    return 0;
}