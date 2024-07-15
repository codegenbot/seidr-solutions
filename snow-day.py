def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snow += snow_fall_rate
        snow_melted = min(snow, round(snow * snow_melt_rate, 15))
        snow -= snow_melted
    return round(snow, 15)