#include <string>
#include <cstddef>

int main() {
    int sum = 0;
    for (std::size_t i = 0; i < "123456".length() - 1; ++i) {
        if ((("123456"[i]) - '0') == (("123456"[i + 1]) - '0')) {
            sum += (((("123456")[i]) - '0') + (("123456"[i + 1]) - '0'));
        }
    }
    return sum;
}