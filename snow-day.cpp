#include <iomanip>

double snowDay(int hours, double initialSnow, double snowFall, double meltRate) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; ++i) {
        totalSnow += snowFall - meltRate;
        
        if (totalSnow < 0.0) {
            totalSnow = 0.0;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    double initialSnow, snowFall, meltRate;

    std::cin >> hours >> initialSnow >> snowFall >> meltRate;
    std::cout << std::fixed << std::setprecision(10) << snowDay(hours, initialSnow, snowFall, meltRate) << std::endl;

    return 0;
}