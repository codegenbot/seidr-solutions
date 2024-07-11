#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateSnowFall, float meltRate) {
    double totalSnow = 0;
    
    for(int i=0; i<hours; i++) {
        totalSnow += groundSnow + rateSnowFall;
        groundSnow *= (1 - meltRate);
    }
    
    return groundSnow;
}

int main() {
    int hours;
    float groundSnow, rateSnowFall, meltRate;

    cin >> hours >> groundSnow >> rateSnowFall >> meltRate;

    double result = snowDay(hours, groundSnow, rateSnowFall, meltRate);

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}