#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowOnGround, float rateOfSnowfall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        snowOnGround += rateOfSnowfall;
        snowOnGround -= snowOnGround * proportionOfSnowMeltingPerHour;
    }
    
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, rateOfSnowfall, proportionOfSnowMeltingPerHour;

    cin >> hours >> snowOnGround >> rateOfSnowfall >> proportionOfSnowMeltingPerHour;

    cout << setprecision(6) << calculateSnow(hours, snowOnGround, rateOfSnowfall, proportionOfSnowMeltingPerHour);

    return 0;
}