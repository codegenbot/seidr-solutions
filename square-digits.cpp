```cpp
#include <iostream>
#include <string>
#include <cstdio>

std::string squareDigits(int num) {
    std::string result = "";
    while (num > 0) {
        int digit = num % 10;
        result = char('0' + digit * digit) + result;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    while (std::scanf("%d", &num) != EOF) {
        std::cout << squareDigits(num) << std::endl;
    }
    return 0;
}
```