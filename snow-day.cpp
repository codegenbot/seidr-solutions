#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(2) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}