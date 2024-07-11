for (int i = 0; i < hours; ++i) {
    snow_on_ground = snow_on_ground + snow_fall_rate - snow_on_ground * snow_melt_rate;
}