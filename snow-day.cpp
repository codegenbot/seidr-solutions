for (int i = 0; i < hours; ++i) {
    float snow_after_hour = snow_on_ground + snow_fall_rate - (snow_on_ground * snow_melt_rate);
    snow_on_ground = std::max(0.0f, snow_after_hour);
}