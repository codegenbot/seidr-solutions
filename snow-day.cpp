```cpp
double snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow *= (1 - meltRate / 100.0);
    }
    return snow;

}

int main() {
    int hours = 5; 
    float initialSnow = 10.0f; 
    float rateOfFall = 2.0f; 
    float meltRate = 1.5f; 

    double result = snowDay(hours, initialSnow, rateOfFall, meltRate);
    std::cout << "Amount of snow on the ground after " << hours << " hours: " << result << std::endl;

    return 0;
}