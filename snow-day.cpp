```cpp
#include <iostream>

int main() {
    int hours;
    std::cin >> hours;

    float snowOnGround, snowFallRate, meltingPerHour;
    std::cin >> snowOnGround >> snowFallRate >> meltingPerHour;

    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate - meltingPerHour;
    }

    std::cout << snowOnGround;

    return 0;
}