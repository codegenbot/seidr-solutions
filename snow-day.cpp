```cpp
#include <iostream>
#include <iomanip>

using namespace std;

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

    cout << "The amount of snow on the ground after " << hours << " hours is: " 
         << fixed << groundSnow;

    return 0;
}