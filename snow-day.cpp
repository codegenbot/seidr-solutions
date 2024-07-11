for (int i = 0; i < hours; ++i) {
    float initial_snow = snow_on_ground;
    snow_on_ground = initial_snow + snow_fall_rate - (initial_snow * snow_melt_rate);
}