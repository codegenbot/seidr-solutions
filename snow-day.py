def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    current_snow = snow_on_ground
    for _ in range(hours):
        current_snow = current_snow + snow_fall_rate - (current_snow * snow_melt_rate)
    return current_snow