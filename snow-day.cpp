#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow -= meltingRate * currentSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float currentSnow, rateOfSnowfall, meltingRate;

    cin >> hours >> currentSnow >> rateOfSnowfall >> meltingRate;

    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowfall, meltingRate) << endl;

    return 0;
}