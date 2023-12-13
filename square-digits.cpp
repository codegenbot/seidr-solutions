```cpp
#include <iostream>
#include <string>

std::string squareDigits(int num) {
    std::string result = "";
    while (num > 0) {
        int digit = num % 10;
        result.append(std::to_string(digit * digit));
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << squareDigits(num) << std::endl;
    return 0;
}
```