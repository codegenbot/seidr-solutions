#include <iostream>
using namespace std;

float calculateSnow(int hours, float initialSnow, float rateOfSnowfall, float meltRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnowfall;
        snow -= meltRate;
    }
    return snow;
}

int main() {
    int hours;
    cout << "Enter number of hours: ";
    cin >> hours;
    float initialSnow, rateOfSnowfall, meltRate;
    cout << "Enter initial amount of snow (in feet): ";
    cin >> initialSnow;
    cout << "Enter rate of snowfall per hour (in feet): ";
    cin >> rateOfSnowfall;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> meltRate;
    float finalSnow = calculateSnow(hours, initialSnow, rateOfSnowfall, meltRate);
    cout << "After " << hours << " hours, there will be " << finalSnow << " feet of snow on the ground." << endl;
    return 0;
}