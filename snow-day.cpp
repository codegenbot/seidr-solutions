#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = 0.0; // Initialize to zero

    for (int i = 0; i < hours; i++) {
        totalSnow += initialSnow;
        totalSnow += rateOfSnowfall - totalSnow * proportionMeltingPerHour;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Enter initial snow: ";
    cin >> initialSnow;
    cout << "Enter rate of snow fall: ";
    cin >> rateOfSnowfall;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);
    
    cout << "Amount of snow on the ground after " << hours << " hours is: " << result << endl;

    return 0;
}