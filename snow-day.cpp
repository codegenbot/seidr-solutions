#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    int r_int = (int)(rate * 100); 
    int m_int = (int)(melt * 100);
    return ((groundSnow + r_int / 100.0 * hours - m_int / 100.0 * hours));
}

int main() {
    int h;
    cin >> h;
    float g, r, m;
    cin >> g >> r >> m;
    cout << fixed << setprecision(10) << snowDay(h, g, r, m) << endl;
    return 0;
}