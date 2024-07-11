#include <iostream>
using namespace std;

double snowDay(int hours, float onTheGround, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = onTheGround;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionMeltingPerHour * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float onTheGround, rateOfSnowFall, proportionMeltingPerHour;
    cin >> onTheGround >> rateOfSnowFall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, onTheGround, rateOfSnowFall, proportionMeltingPerHour) << endl;
    return 0;
}