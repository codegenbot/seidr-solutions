#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFall, float meltingRate) {
    return initialSnow + (snowFall * hours - meltingRate * hours);
}

int main() {
    int h;
    cin >> h;
    float s, sf, mr;
    cin >> s >> sf >> mr;
    cout << fixed << setprecision(10) << calculateSnow(h, s, sf, mr) << endl;
    return 0;
}