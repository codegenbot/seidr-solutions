#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        if(totalSnow > 0)
            totalSnow -= meltPerHour;
    }
    return totalSnow;
}

int main() {
    int hours = 5; 
    float initialSnow = 0.0f;
    float snowFallRate = 1.0f;
    float meltPerHour = 0.2f;

    double result = snowDay(hours, initialSnow, snowFallRate, meltPerHour);
    cout << "Total snow after " << hours << " hours: " << result << endl;
    return 0;
}