#include <string>
using namespace std;

string middleCharacterHelper(string str) {
    int len = str.length();
    if(len % 2 == 0){
        return str.substr(len/2-1, 2);
    } else{
        return string(1, str[len/2]);
    }
}