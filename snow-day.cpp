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
        double snowToBeAdded = rateOfSnowFall;
        double snowToBeMelted = proportionOfSnowMeltingPerHour * totalSnow;
        
        if (snowToBeAdded > 0) { // Only add if it's a positive amount of snow
            totalSnow += snowToBeAdded - snowToBeMelted; 
            // If the remaining snow to be added is still greater than zero, then we need to add it
            if (totalSnow < 0.0) {
                totalSnow = 0.0;
            }
        } else {  // No new snow falling
            if (totalSnow > 0.0) {
                totalSnow -= snowToBeMelted;  
            } else {
                totalSnow = 0.0;
            }
        }
    }
    
    cout << fixed << setprecision(10);  // This is the precision to match your expected output
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << endl;
    return 0;
}