#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return (groundSnow + rate * hours - melt * hours);
}

int main() {
    int h;
    cin >> h;
    
    float g;
    cout << "Enter ground snow: ";
    cin >> g;
    
    float r;
    cout << "\nEnter rate of snow fall: ";
    cin >> r;
    
    float m;
    cout << "\nEnter proportion of snow melting per hour: ";
    cin >> m;
    
    cout << fixed << setprecision(6);
    cout << snowDay(h, g, r, m) << endl;
    return 0;
}