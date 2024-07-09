#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int hours;
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

    double totalSnow = initialSnow;  // Initialize with initial snow
    
    for (int i = 0; i < hours; i++) {
        double snowAdded = rateOfSnowFall;
        snowAdded -= proportionOfSnowMeltingPerHour * totalSnow; // Apply the melting first

        if (snowAdded > 0) { // Only add if it's a positive amount of snow
            totalSnow += snowAdded;
        }
    }
    
    cout << fixed << setprecision(5);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << endl;
    return 0;
}