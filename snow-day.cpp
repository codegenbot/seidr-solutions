#include <cstdio>
#include <cmath>
float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    float current_snow = initial_snow;
    for (int i = 0; i < hours; i++) {
        current_snow = (1 - proportion_of_melting) * (initial_snow + rate_of_snowfall * i) + proportion_of_melting * initial_snow;
    }
    return current_snow;
}
int main() {
    int hours = 15; // initialize hours with an example value
    float initial_snow = 12.549344913779084; // initialize initial_snow with an example value
    float rate_of_snowfall = 6.8569897541878335; // initialize rate_of_snowfall with an example value
    float proportion_of_melting = 0.752812109670299; // initialize proportion_of_melting with an example value
    float current_snow = snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting);
    printf("%f\n", current_snow);
    return 0;
}