```cpp
#include <string>

int main() {
    std::string s;
    // get input from user or any other operation
    std::cout << middleCharacter(s) << std::endl;  // call the function and print result
    return 0;
}

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0){
        return s.substr(len/2-1,2);
    } else{
        return s.substr(len/2,1);
    }
}