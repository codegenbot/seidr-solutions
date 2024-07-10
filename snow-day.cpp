#include <iostream>
using namespace std;

#include <iomanip>

double calculateSnow(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= totalSnow * meltingRate / 100.0;
    }
    
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;

    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << endl;

    return 0;
}