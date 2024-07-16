#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        initialSnow += rateOfSnowfall;
        initialSnow -= initialSnow * proportionOfMeltingPerHour;
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