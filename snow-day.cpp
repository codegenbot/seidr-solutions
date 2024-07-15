```cpp
#include <iomanip>
#include <ostream>

int snowDay(int hours, float groundSnow, float rate, float melt) {
    for(int i = 0; i < hours; ++i) {
        groundSnow += rate - melt;
    }
    return static_cast<int>(groundSnow);
}

int main() {
    std::string line;
    cin >> line;
    int h;
    std::stringstream ss(line);
    ss >> h;
    float groundSnow, rate, melt;
    ss >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(h, groundSnow, rate, melt) << endl;
    return 0;