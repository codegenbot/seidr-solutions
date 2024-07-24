```cpp
#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float groundSnow, snowFallRate, snowMeltingRate;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the initial amount of snow: ";
    cin >> groundSnow;
    cout << "Enter the rate of snow fall: ";
    cin >> snowFallRate;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> snowMeltingRate;

    for (int i = 0; i < hours; i++) {
        groundSnow += round(snowFallRate - (groundSnow * snowMeltingRate));
    }

    cout << fixed << std::setprecision(2);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << groundSnow << endl;

    return 0;
}