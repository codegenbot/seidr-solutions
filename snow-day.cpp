#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rate, float meltRate) {
    return initialSnow + (rate * hours) - (meltRate * hours);
}

int main() {
    int n;
    cin >> n;
    float s, r, m;
    cin >> s >> r >> m;
    
    cout << fixed << setprecision(10) << calculateSnow(n, s, r, m) << endl;

    return 0;
}