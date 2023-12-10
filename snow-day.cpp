#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    for (int i = 0; i < hours; i++) {
        snowOnGround += rateOfSnowFall;
        if (snowOnGround > 0) {
            float meltedSnow = snowOnGround * proportionOfSnowMeltingPerHour;
            snowOnGround -= meltedSnow;
        }
    }
    cout << fixed << setprecision(12) << snowOnGround << endl;
    return 0;
}