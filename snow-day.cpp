#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltProportion, snowLeft;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltProportion;
    for (int i = 1; i <= hours; i++) {
        snowLeft = snowOnGround + (snowFallRate * i) - (snowOnGround * snowMeltProportion);
        if (snowLeft < 0.0) {
            break;
        }
    }
    cout << fixed << setprecision(9) << snowLeft << endl;
}