#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float meltingRate) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowfall > 0.0) {
            totalSnow += rateOfSnowfall;
        }
        
        if (meltingRate > 0.0 && initialSnow > 0.0) {
            initialSnow -= meltingRate * initialSnow;
        }
    }
    
    return totalSnow + initialSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, meltingRate;
    cin >> initialSnow >> rateOfSnowfall >> meltingRate;
    
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, meltingRate) << endl;
    
    return 0;
}