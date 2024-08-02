#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowfall, float meltingRate) {
    return (initialSnow + rateOfSnowfall * hours - meltingRate * hours);
}

int main() {
    int h;
    cin >> h;
    float is, rsf, mr;
    cin >> is >> rsf >> mr;

    cout << fixed << setprecision(10) << calculateSnow(h, is, rsf, mr);

    return 0;
}