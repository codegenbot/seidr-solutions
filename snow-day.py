def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    total_snow = snow_on_ground
    for _ in range(hours):
        total_snow -= snow_melt_rate * total_snow
        total_snow += snow_fall_rate
    return total_snow