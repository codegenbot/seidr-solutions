```c++
double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow = totalSnow + rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
    }
    
    return totalSnow;
}

int main() {
    int hours = 5; 
    float initialSnow = 10.0f;
    float rateOfSnowFall = 2.0f;
    float proportionOfSnowMeltingPerHour = 0.1f;

    double totalSnow = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    std::cout << "Total snow after " << hours << " hours: " << totalSnow << std::endl;

    return 0;
}