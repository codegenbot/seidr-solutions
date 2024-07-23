```c++
#include <string>

int pairedDigits(std::string str) {
    int sum = 0;
    for(int i=0; i<str.length(); i++) {
        if(i+1 < str.length() && str[i] == str[i+1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string str = "123333"; 
    int result = pairedDigits(str);
    return 0;
}