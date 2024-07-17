#include <string>

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main(int argc, char** argv) {
    std::cout << pairedDigits("123211"); // test the function with a test string
    return 0;
}