#include <iostream>
using namespace std;

float snowDay(int hours, float onTheGround, float rate, float melt) {
    return onTheGround + (hours * rate) - ((int)(hours * 100.0f)) * melt;
}

int main() {
    int h; 
    cin >> h;
    float sotg, sr, sm;
    cin >> sotg >> sr >> sm;

    cout << fixed << setprecision(10);
    cout << snowDay(h, sotg, sr, sm) << endl;
    
    return 0;
}