float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    if (initial_snow == 0.0) {
        return 0.0;
    } else {
        float current_snow = initial_snow;
        for (int i = 0; i < hours; i++) {
            current_snow += rate_of_snowfall;
            current_snow -= current_snow * proportion_of_melting;
        }
        return current_snow;
    }
}