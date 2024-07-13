float snow_added, snow_melted;
for (int i = 0; i < hours; ++i) {
    snow_added = std::min(snow_on_ground, snow_fall_rate);
    snow_melted = snow_on_ground * snow_melt_rate;

    snow_on_ground = (snow_on_ground + snow_added - snow_melted);
    snow_on_ground = std::max(0.0f, snow_on_ground);
}