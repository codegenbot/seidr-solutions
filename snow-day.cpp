#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    int totalHours = 0;
    float snowOnGround = initialSnow;
    while (totalHours <= hours) {
        if (totalHours > 0) {
            snowOnGround -= snowOnGround * (proportionMeltingPerHour / 100);
        }
        snowOnGround += rateOfSnowfall;
        totalHours++;
    }
    return snowOnGround;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
    return 0;