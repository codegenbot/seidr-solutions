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
    cout << "Enter the initial snow on the ground (in feet): ";
    cin >> initialSnow;

    float snowFallRate;
    cout << "Enter the rate at which snow is falling (in feet per hour): ";
    cin >> snowFallRate;

    float meltPerHour;
    cout << "Enter the proportion of snow that melts per hour: ";
    cin >> meltPerHour;

    double result = snowDay(hours, initialSnow, snowFallRate, meltPerHour);
    cout << "Result: " << result << std::endl;
    return 0;
}