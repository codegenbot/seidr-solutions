float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    float current_snow = initial_snow;
    for (int i = 0; i < hours; i++) {
        current_snow += rate_of_snowfall;
        #if __cplusplus >= 201103L
            current_snow -= std::round(current_snow * proportion_of_melting);
        #else
            current_snow -= floor(current_snow * proportion_of_melting + 0.5);
        #endif
    }
    return current_snow;
}