#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    return initialSnow + rateOfSnowFall * hours - proportionOfSnowMeltingPerHour * hours;
}

int main() {
    int n;
    cin >> n;
    float s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << fixed << setprecision(10) << snowDay(n, s1, s2, s3) << endl;
    return 0;
}