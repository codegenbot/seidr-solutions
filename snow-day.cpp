```c++
#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        float accumulation = rateOfSnowFall;
        float melting = accumulation * proportionOfSnowMeltingPerHour;
        initialSnow += accumulation - melting;
    }
    
    return initialSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cout << "Enter number of hours: ";
    cin >> hours;

    cout << "Enter initial snow (inches): ";
    cin >> initialSnow;

    cout << "Enter rate of snow fall (inches per hour): ";
    cin >> rateOfSnowFall;

    cout << "Enter proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);
    cout << "Amount of snow on the ground after " << hours << " hours: " << result << endl;

    return 0;
}