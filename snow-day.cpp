#include <iostream>
using namespace std;

float snowDay(int hours, float currentSnow, float rate, float meltRate) {
    float totalSnow = 0;
    
    // Add snow and then melt it for each hour
    for (int i = 1; i <= hours; i++) {
        totalSnow += rate;
        totalSnow *= (1 - meltRate);
    }
    
    return currentSnow + totalSnow;
}

int main() {
    int hours;
    float currentSnow, rate, meltRate;

    cin >> hours >> currentSnow >> rate >> meltRate;

    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rate, meltRate);

    return 0;
}