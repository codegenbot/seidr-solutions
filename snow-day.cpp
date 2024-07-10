for (int i = 0; i < hours; ++i) {
    snow_on_ground += snow_fall_rate;
    float snow_melted = snow_melt_rate * snow_on_ground;
    snow_on_ground -= snow_melted; // Adjusted line
}