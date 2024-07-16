#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += initialSnow;
        initialSnow += rateOfSnowfall - initialSnow * proportionOfMeltingPerHour;
    }
    return initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfMeltingPerHour;
    cout << fixed << setprecision(6);
    cout << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour) << endl;
    return 0;
}