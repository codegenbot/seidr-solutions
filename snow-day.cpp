Here is the modified code:

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
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;