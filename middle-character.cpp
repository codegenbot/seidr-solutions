#include <string>
using namespace std;

// Middle Character: Given a string, return the middle character as a string if it is odd length; 
// return the two middle characters as a string if it is even length.
string middleCharacter(string s) {
    int len = s.length();
    if(len%2 == 0){
        return s.substr(len/2-1,len/2);
    }
    else{
        return s.substr(len/2,1);
    }
}