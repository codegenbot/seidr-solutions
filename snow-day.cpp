#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float snowFallRate, float meltingRate) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        if (i > 0)
            totalSnow -= meltingRate * totalSnow;
        
        if (snowFallRate > 0.0)
            totalSnow += snowFallRate;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, snowFallRate, meltingRate;
    
    cin >> hours >> groundSnow >> snowFallRate >> meltingRate;
    
    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, snowFallRate, meltingRate) << endl;
    
    return 0;
}