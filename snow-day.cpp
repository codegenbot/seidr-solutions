#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall - proportionOfMeltingPerHour * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour);

    return 0;
}