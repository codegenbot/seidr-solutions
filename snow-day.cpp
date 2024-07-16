```
#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow *= (1 - proportionOfSnowMeltingPerHour);
    }
    return totalSnow;
}

int main() {
    int hours, temp;
    float initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour;

    cin >> hours >> temp;
    initialSnow = static_cast<float>(temp) / 100.0f;
    rateOfSnowfall = (static_cast<float>(cin.peek()) + 48.0) / 48.0 * 1.0f;
    proportionOfSnowMeltingPerHour = (static_cast<float>(cin.peek()) + 48.0) / 48.0;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour) << endl;
    return 0;