#include <iostream>
using namespace std;

int main() {
    int hours;
    float groundSnow, snowFallRate, meltPerHour;
    
    cin >> hours >> groundSnow >> snowFallRate >> meltPerHour;
    
    float newGroundSnow = groundSnow + (snowFallRate * hours) - (meltPerHour * hours);
    
    cout << "The amount of snow on the ground after " << hours << " hours is: ";
    cout << fixed << setprecision(2) << newGroundSnow << endl;
    
    return 0;
}