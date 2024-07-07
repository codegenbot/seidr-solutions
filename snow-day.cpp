
#include <iostream>
using namespace std;
int main() {
    int hours = 10; // initialize hours with an example value
    float initial_snow = 5.0; // initialize initial_snow with an example value
    float rate_of_snowfall = 2.0; // initialize rate_of_snowfall with an example value
    float proportion_of_melting = 0.5; // initialize proportion_of_melting with an example value
    cout << "The amount of snow on the ground after " << hours << " hours is: ";
    cout << snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting) << endl;
    return 0;
}