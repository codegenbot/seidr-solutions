```cpp
#include <iostream>
using namespace std;

bool solveBoolean() {
    bool result = true;
    char c;
    while((c=cin.get()) != '\n') {
        if (c == 'F') {
            return false;
        }
        else if (c == '|') {
            result = !result;
        }
        else if (c == '&') {
            while(c == '&') {
                c = cin.get();
            }
            if (!result) return false;
        }
    }
    return true;
}

int main() {
    cout << "Enter a Boolean expression (T/F/|/&): ";
    bool result = solveBoolean(); 
    cout << "Result: " << (result ? "True" : "False") << endl;
    return 0;
}