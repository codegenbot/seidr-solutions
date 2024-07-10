#include <iostream>
#include <iomanip>
using namespace std;

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

    cout << setprecision(10) << fixed << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << endl;

    return 0;
}