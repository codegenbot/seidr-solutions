```cpp
float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float result = initialSnow;
    for (int i = 0; i < hours; i++) {
        result += rateOfSnowFall / 100.0f * result;
        result *= (1 - proportionOfSnowMeltingPerHour);
        if(result < 0) {
            result = 0.0f;
        }
    }
    return result;
}

int main() {
    float result = snowDay(5, 10.0f, 2.0f, 0.1f);
    std::cout << "Snow on the ground after 5 hours: " << result << std::endl;
    return 0;
}