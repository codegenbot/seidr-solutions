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
        double newSnowAdded = rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow;
        if (newSnowAdded > 0) { // Only add if it's a positive amount of snow
            totalSnow += newSnowAdded;
        } else {
            totalSnow = max(0.0, totalSnow + newSnowAdded); // Make sure the value is not less than 0
        }
    }
    
    cout << fixed << setprecision(5);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << endl;
    return 0;
}