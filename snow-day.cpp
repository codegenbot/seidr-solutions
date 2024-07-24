```cpp
#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float groundSnow, snowFallRate, snowMeltingRate;

    std::cin >> hours >> groundSnow >> snowFallRate >> snowMeltingRate;

    for(int i = 0; i < hours; i++) {
        groundSnow += snowFallRate - snowMeltingRate;
    }

    cout << std::fixed << std::setprecision(2) << "The amount of snow on the ground after " << hours << " hours is: " << groundSnow << std::endl;

    return 0;
}