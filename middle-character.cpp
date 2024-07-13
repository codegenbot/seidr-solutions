#include <string>

std::string getMiddleCharacterHelper(std::string inputStr) {
    int len = inputStr.length();
    if(len % 2 == 0){
        return inputStr.substr(len/2-1, 2);
    } else{
        return std::string(1, inputStr[len/2]);
    }
}