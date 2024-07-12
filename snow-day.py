def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        new_snow = snow + snow_fall_rate
        snow = new_snow * (1 - snow_melt_rate)
    return snow