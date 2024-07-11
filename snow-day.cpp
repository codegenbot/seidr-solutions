```c++
int main() {
    int hours = 3; // number of hours
    float groundSnow = 0.1f; // initial amount of snow on the ground
    float rate = 0.5f; // rate of snow fall
    float melt = 0.2f; // proportion of snow melting per hour

    float result = snowDay(hours, groundSnow, rate, melt);
    std::cout << "Amount of snow after " << hours << " hours: " << result << std::endl;

    return 0;
}

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate - melt;
    }
    return totalSnow;
}