#include <vector>
#include <iostream>

using namespace std;

float snowDay(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    return initialSnow + snowfallRate * hours - meltingRate * hours;
}

int main() {
    int h;
    cin >> h;
    float s0, sr, mr;
    cin >> s0 >> sr >> mr;
    cout << fixed << setprecision(10);
    cout << snowDay(h, s0, sr, mr) << endl;
    return 0;
}