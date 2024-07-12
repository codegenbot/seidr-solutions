#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        if (totalSnow > 0) {
            totalSnow -= meltPerHour;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;

    float initialSnow;
    cout << "Enter the initial amount of snow on the ground (in meters): ";
    cin >> initialSnow;

    float snowFallRate;
    cout << "Enter the rate of snow fall (in meters per hour): ";
    cin >> snowFallRate;

    float meltPerHour;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> meltPerHour;

    double result = snowDay(hours, initialSnow, snowFallRate, meltPerHour);
    cout << "Result: " << result << " meters" << endl;
    return 0;
}