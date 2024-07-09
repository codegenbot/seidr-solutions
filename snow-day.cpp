#include <iostream>
using namespace std;

int main() {
    double hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    
    double initialSnow;
    cout << "Enter the initial snow on the ground (in feet): ";
    cin >> initialSnow;
    
    double rateOfSnowFall;
    cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    cin >> rateOfSnowFall;
    
    double proportionOfSnowMeltingPerHour;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= initialSnow * proportionOfSnowMeltingPerHour;
    }
    
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << endl;

    return 0;
}