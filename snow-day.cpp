
#include <iostream>
#include <cmath>
using namespace std;

double snowDay(int hours, double groundSnow, double snowFallRate, double meltProportion) {
    double snowOnGround = groundSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate * (1 - pow(meltProportion, i + 1));
        snowOnGround -= meltProportion * snowOnGround;
    }
    return snowOnGround;
}

int main() {
    int hours;
    double groundSnow, snowFallRate, meltProportion;
    cin >> hours >> groundSnow >> snowFallRate >> meltProportion;
    cout << snowDay(hours, groundSnow, snowFallRate, meltProportion) << endl;
    return 0;
}