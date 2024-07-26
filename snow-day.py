def snow_day(hours, initial_snow, snow_fall_rate, snow_melt_rate):
    snow_on_ground = initial_snow
    for _ in range(hours):
        snow_on_ground += snow_fall_rate
        snow_on_ground -= snow_melt_rate * snow_on_ground
    return snow_on_ground