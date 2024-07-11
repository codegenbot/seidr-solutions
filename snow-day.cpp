#include <iostream>
#include <algorithm>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        totalSnow -= std::min<float>(totalSnow, rate * melt);
    }
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rate, melt;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    
    std::cout << "Enter initial amount of snow on the ground (in inches): ";
    std::cin >> groundSnow;
    
    std::cout << "Enter snowfall rate (in inches per hour): ";
    std::cin >> rate;
    
    std::cout << "Enter melt rate (as a proportion of the total snow, i.e. 0.5 for 50%): ";
    std::cin >> melt;

    float result = snowDay(hours, groundSnow, rate, melt);

    std::cout << "After " << hours << " hours, there will be approximately " << result << " inches of snow on the ground.\n";

    return 0;
}