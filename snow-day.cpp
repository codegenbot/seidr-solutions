#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    double totalSnow = 0.0;
    
    // calculate the amount of snow that falls in each hour
    for (int i = 1; i <= hours; i++) {
        totalSnow += groundSnow + rateOfFall;
        // subtract the melted snow from the total
        if (meltRate > 0) {
            totalSnow -= totalSnow * meltRate / 100.0;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateOfFall, meltRate;

    cin >> hours >> groundSnow >> rateOfFall >> meltRate;

    cout << fixed << setprecision(6) << snowDay(hours, groundSnow, rateOfFall, meltRate);

    return 0;
}