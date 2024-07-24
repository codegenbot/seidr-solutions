#include <string>

std::string cipher2;
std::string result(cipher2.size(), ' ');

int main() {
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::cin >> result;

    for (int i = 0; i < result.size(); i++) {
        int index = cipher1.find(result[i]);
        if (index != std::string::npos) {
            result[i] = cipher2[index];
        }
    }

    return result;
}