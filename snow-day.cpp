#include <iostream>
using namespace std;
int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltProportion;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltProportion;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate * (1 - snowMeltProportion);
        snowOnGround -= snowMeltProportion * snowOnGround;
    }
    cout << fixed << setprecision(9) << snowOnGround << endl;
    return 0;
}