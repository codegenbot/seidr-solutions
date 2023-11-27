#include <iostream>
using namespace std;

double calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    double snowOnGround = initialSnow;
    for (float i = 0; i < hours - 1; i++) {
        snowOnGround += snowFallRate;
        double meltedSnow = snowOnGround * meltingRate;
        snowOnGround -= meltedSnow;
    }
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    double result = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << result << endl;
    return 0;
}