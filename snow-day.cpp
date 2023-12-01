#include <iostream>
using namespace std;

double calculateSnow(double hours, double initialSnow, double snowFallRate, double meltingRate) {
    double snowOnGround = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * meltingRate;
    }
    
    return snowOnGround;
}

int main() {
    double hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    double finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    
    cout << finalSnow << endl;
    
    return 0;
}