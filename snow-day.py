def calculate_snow_hours(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion):
    snow = snow_on_ground
    for _ in range(hours):
        snow -= snow_melt_proportion * snow
        snow += snow_fall_rate
    return round(snow, 16)