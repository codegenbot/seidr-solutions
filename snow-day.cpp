#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfFall, float meltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 1; i <= hours; i++) {
        if (i == 1) {
            totalSnow += initialSnow;
        } else {
            totalSnow += rateOfFall;
            totalSnow -= meltingPerHour * (totalSnow > 0 ? totalSnow : 0);
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltingPerHour;
    cin >> initialSnow >> rateOfFall >> meltingPerHour;
    
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltingPerHour) << endl;

    return 0;
}