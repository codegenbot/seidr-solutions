#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    // Add snow and then melt it for each hour
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow -= totalSnow * proportionMeltingPerHour;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);

    cout << fixed << setprecision(10);
    cout << result << endl;

    return 0;
}