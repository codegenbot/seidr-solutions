def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snow_melted = snow_on_ground * snow_melt_rate
        snow += snow_fall_rate
        snow -= snow_melted
    return round(snow, 10)