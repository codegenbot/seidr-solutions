#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltProportion) {
    for(int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= meltProportion * snowOnGround;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltProportion;
    cin >> hours >> snowOnGround >> snowFallRate >> meltProportion;
    float result = calculateSnow(hours, snowOnGround, snowFallRate, meltProportion);
    cout << result << endl;
    return 0;
}