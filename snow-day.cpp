#include <initializer_list>

float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    for (int i = 0; i < hours; ++i) {
        currentSnow += std::min(currentSnow + rateOfSnowfall, std::max(0.0f, rateOfSnowfall));
        
        if (currentSnow > 0)
            currentSnow -= std::min(currentSnow, meltingRate);
    }
    
    return currentSnow;
}