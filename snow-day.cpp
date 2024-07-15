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
    cout << std::fixed << std::setprecision(6); // Set precision to 6 decimal places.
    cout << snowDay(hours, groundSnow, rate, melt) << endl;
    cout << std::resetiosflags(std::ios_base::floatfield);
    return 0;