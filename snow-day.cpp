#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;

    std::cin >> hours >> snow >> rate >> melt;

    float snowfall = rate - (snow * melt);

    // Calculate amount of snow on the ground after 'hours' hours

    return 0;
}