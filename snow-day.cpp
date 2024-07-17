#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingRate) {
    return (groundSnow + rateOfFall * hours - meltingRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfFall, meltingRate;
    cin >> groundSnow >> rateOfFall >> meltingRate;
    
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfFall, meltingRate) << endl;

    return 0;
}