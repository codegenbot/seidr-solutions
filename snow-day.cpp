double final_snow_amount(int hours, double initial_snow, double snow_fall_rate, double melt_rate) {
    double snow_on_ground = initial_snow;
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= snow_on_ground * melt_rate;
    }
    return snow_on_ground;
}