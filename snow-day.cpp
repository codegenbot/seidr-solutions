#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (totalSnow > initialSnow) {
            totalSnow -= (totalSnow - initialSnow);
        } else {
            totalSnow -= meltingRate * initialSnow;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltingRate;
    cin >> initialSnow >> rateOfFall >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltingRate);
    return 0;
}