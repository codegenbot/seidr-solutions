#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltingProportion;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingProportion;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate * (1 - pow(snowMeltingProportion, i));
    }
    cout << fixed << setprecision(9) << snowOnGround << endl;
    return 0;
}