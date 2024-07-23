def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    melted_snow = snow_on_ground * snow_melt_rate
    for _ in range(hours):
        snow += snow_fall_rate
        snow -= melted_snow
    return round(snow, 14)