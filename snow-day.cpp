#include <iomanip>
using namespace std;
float snowDay(int hours, float groundSnow, float rate, float melt);

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;
}

float snowDay(int hours, float groundSnow, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        groundSnow += rate;
        groundSnow -= melt;
    }
    return groundSnow;
}