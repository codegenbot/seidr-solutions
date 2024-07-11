#include <iostream>
#include <string>

int main() {
    std::string result = "hello world";
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] == ' ') {
            int j = i - 1;
            while (j >= 0 && ((result[j] > ' '))) {
                --j;
            }
            std::string temp(result, j + 1, i);
            if (temp.length() >= 5) {
                std::reverse(temp.begin(), temp.end());
            }
            result.replace(i - temp.length() + 1, temp.length(), temp);
        }
    }
    std::cout << result << std::endl;
    return 0;
}