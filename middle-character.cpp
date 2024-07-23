#include <string>
#include <iostream>

std::string middleCharacter(const std::string& s) {
    int len = s.length();
    if(len % 2 == 0)
        return s.substr(len/2 - 1, 2);
    else
        return s.substr(len/2, 1);
}

int main() {
    std::cout << middleCharacter("c=88}~^EZCByAZk[R4GNy'^%J)[AfJcr].D/s%c6O,eps4mNRW[4$ZJ>Zto_.K3ct{'&j}Y)Vk6%voe[!\:wBZhNnnAbq R,");
    return 0;
}