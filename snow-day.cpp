```cpp
#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return (groundSnow + rate * hours - melt * hours);
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    cout << std::setiosflags(std::ios_base::fixed) << std::setprecision(10);
    cout << std::to_string(snowDay(h, g, r, m)) << endl;
    return 0;
}