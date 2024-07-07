```c++
#include <iostream>
#include <cmath>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow; // Initialize to the initial amount of snow

    for (int i = 0; i < hours; i++) {
        double netSnowfall = rateOfSnowfall - (totalSnow * proportionMeltingPerHour);
        if (netSnowfall > 0) {
            totalSnow += netSnowfall;
        } else {
            totalSnow = std::max(0.0, totalSnow + netSnowfall); // Ensure snow can't go below zero
        }
    }

    return totalSnow;
}

int main() {
    int hours, rateOfSnowfall;
    float initialSnow, proportionMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall / 3600.0f, proportionMeltingPerHour);
    cout << fixed << setprecision(2) << result;
    
    return 0;
}