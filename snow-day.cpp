#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float hours, snowOnGround, rateOfSnowFall, proportionOfSnowMelting;
    cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMelting;
    for (int i = 0; i < hours; i++) {
        snowOnGround += rateOfSnowFall * pow(1 - proportionOfSnowMelting, i);
    }
    cout << fixed << setprecision(9) << snowOnGround << endl;
}