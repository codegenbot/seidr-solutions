#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float meltingRate) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; ++i) {
        totalSnow += rateOfSnowfall;
        if (totalSnow > 0)
            totalSnow -= totalSnow * meltingRate;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, meltingRate;
    cin >> initialSnow >> rateOfSnowfall >> meltingRate;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, meltingRate);

    cout << fixed << setprecision(10);
    cout << result << endl;

    return 0;
}