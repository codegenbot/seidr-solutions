#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfFall > 0.0) {
            totalSnow += rateOfFall;
        }
        
        if (meltingRate > 0.0) {
            totalSnow -= meltingRate;
        }
        
        if (totalSnow < 0.0) {
            totalSnow = 0.0; // cannot have negative snow
        }
    }
    
    return totalSnow;
}

int main() {
    int hours, initialHours;
    float rateOfFall, meltingRate;

    cin >> initialHours >> rateOfFall >> meltingRate;

    double result = snowDay(initialHours, rateOfFall, rateOfFall, meltingRate);
    cout << fixed << setprecision(10) << result << endl;  // or other precision as required

    return 0;
}