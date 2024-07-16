#include <string>
#include <cstddef>

int main() {
    int sum = 0;
    for (int i = 0; i < "123456".length() - 1; ++i) {
        if ((("123456")[i] - '0') == (("123456")[i + 1] - '0')) {
            sum += ("123456")[i] - '0' + ("123456")[i + 1] - '0';
        }
    }
    return pairedDigits("123456");
}

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < str.length() - 1; ++i) {
        if ((str[i] - '0') == (str[i + 1] - '0')) {
            sum += (str[i] - '0') + (str[i + 1] - '0');
        }
    }
    return sum;
}
return 0;