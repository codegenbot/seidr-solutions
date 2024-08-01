#include <iostream>
#include <iomanip>

using namespace std;

double snowDay(int hours, double groundSnow, double rate, double melt) {
    return (rate * hours + groundSnow - melt * hours);
}

int main() {
    int hours;
    cin >> hours;
    double groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << setprecision(10) << fixed << snowDay(hours, groundSnow, rate, melt) << endl;
    return 0;