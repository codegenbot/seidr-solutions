#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float rateOfSnowfall, float meltingRate) {
    return initialSnow + rateOfSnowfall * hours - meltingRate * hours;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, meltingRate;
    cin >> initialSnow >> rateOfSnowfall >> meltingRate;
    
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, rateOfSnowfall, meltingRate) << endl;
    
    return 0;
}