```cpp
#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    return onGround + (rate * hours - melt * hours);
}

int main() {
    int h;
    cin >> h;
    float s, r, m;
    cin >> s >> r >> m;
    ios_base::fmtflags flags = cout.flags();
    cout << fixed << setprecision(10);
    cout << snowDay(h, s, r, m) << endl;
    cout.flags(flags);  
    return 0;
}