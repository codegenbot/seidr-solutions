```cpp
#include <iostream>
#include <string>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return (groundSnow + rate * hours - melt * hours);
}

int main() {
    int h;
    cin >> h;
    string gStr, rStr, mStr;
    cin >> gStr >> rStr >> mStr;
    float g = stof(gStr), r = stof(rStr), m = stof(mStr);
    cout << fixed << setprecision(6);
    cout << snowDay(h, g, r, m) << endl;
    return 0;