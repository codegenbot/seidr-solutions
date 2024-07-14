Here is the completed code:

#include <string>
using namespace std;

string middleCharacter(string str) {
    int length = str.length();
    string result;
    
    if (length % 2 == 0) {
        int mid1 = length / 2 - 1;
        int mid2 = length / 2;
        result = str.substr(mid1, 2);
    } else {
        int mid = length / 2;
        result = str.substr(mid, 1);
    }
    
    return result;
}