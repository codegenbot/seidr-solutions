#include <iostream>
using namespace std;

int main() {
    float hours, snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    for (int i = 0; i < hours; i++) {
        float newSnow = rateOfSnowFall * (1 - proportionOfSnowMeltingPerHour);
        snowOnGround += newSnow;
        snowOnGround -= proportionOfSnowMeltingPerHour * snowOnGround;
    }
    cout << snowOnGround << endl;
    return 0;
}