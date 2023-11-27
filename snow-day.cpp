#include <iostream>
using namespace std;

int calculateSnow(int hours, int snowOnGround, int snowFallRate, int snowMeltRate) {
    for (int i = 0; i < hours; i += 1) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return snowOnGround;
}

int main() {
    int hours, snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}