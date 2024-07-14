#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowfall > 0.0) {
            totalSnow += rateOfSnowfall;
        }
        
        if (proportionMeltingPerHour > 0.0 && groundSnow > 0.0) {
            groundSnow -= groundSnow * proportionMeltingPerHour;
        }
    }
    
    return max(totalSnow - groundSnow, 0.0);
}

int main() {
    int hours;
    float groundSnow, rateOfSnowfall, proportionMeltingPerHour;

    cin >> hours >> groundSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
    
    return 0;
}