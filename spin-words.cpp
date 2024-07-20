#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    size_t pos = 0;
    
    while ((pos = input.find(" ")) != string::npos) {
        size_t nextSpace = input.find(" ", pos + 1);
        if (nextSpace == string::npos || distance(input.begin() + pos, input.begin() + nextSpace) >= 5)
            output += reverse(input.substr(pos, nextSpace - pos)).append(" ");
        else
            output += input.substr(pos, nextSpace - pos).append(" ");
        
        pos = nextSpace;
    }
    
    if (pos < input.size())
        output += reverse(input.substr(pos)).append(" ");
    
    return output.substr(0, output.size() - 1);
}

int main() {
    // Your test cases here
    cout << spinWords("this is a test") << endl;
    cout << spinWords("hi") << endl;
    cout << spinWords("a") << endl;
    cout << spinWords("this is another test") << endl;
    return 0;
}