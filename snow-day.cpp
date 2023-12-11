#include <iostream>
#include <cmath>
using namespace std;

double snow_day(int hours, float ground, float fall, float melt) {
    double snow = ground;
    for (int i = 0; i < hours; i++) {
        snow += fall * (1 - pow(melt, i + 1));
    }
    return snow;
}

int main() {
    int hours;
    float ground, fall, melt;
    cin >> hours >> ground >> fall >> melt;
    cout << snow_day(hours, ground, fall, melt) << endl;
    return 0;
}