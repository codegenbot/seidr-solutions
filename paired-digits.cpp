```cpp
#include <string>

int main() {
    std::string str = "123211";
    int result = pairedDigitsSum(str);
    std::cout << "Result: " << result << std::endl;
    return 0;

}

int pairedDigitsSum(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}