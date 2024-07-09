float snow_on_ground = 0.0;
for (int i = 0; i < hours; i++) {
    snow_on_ground += snow_fall_rate - snow_melt_rate;
}