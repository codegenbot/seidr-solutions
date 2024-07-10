#include <iostream>

using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow -= totalSnow * proportionOfSnowMeltingPerHour;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowfall >> proportionOfSnowMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour);

    cout << fixed;
    cout.precision(10);
    cout << result << endl;

    return 0;
}