#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int hours;
    float snowOnGround, rateOfSnowfall, proportionOfSnowMeltPerHour, finalSnowAmount = 0.0;
    cin >> hours >> snowOnGround >> rateOfSnowfall >> proportionOfSnowMeltPerHour;
    for (int i = 1; i <= hours; i++) {
        finalSnowAmount += snowOnGround + rateOfSnowfall * i - proportionOfSnowMeltPerHour * (i * i);
    }
    cout << fixed << setprecision(9) << finalSnowAmount << endl;
}