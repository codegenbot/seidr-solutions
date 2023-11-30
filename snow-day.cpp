#include <iostream>

using namespace std;

int calculateSnow(int hours, int snowOnGround, int snowFallRate, int meltRate) {
    int finalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        int snowFall = snowFallRate - meltRate * finalSnow;
        finalSnow = finalSnow + snowFall;
        if (finalSnow < 0) {
            finalSnow = 0;
        }
    }
    return finalSnow;
}

int main() {
    int hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    int finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << finalSnow << endl;

    return 0;
}