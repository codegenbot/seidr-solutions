def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snowfall = snow_fall_rate
        snow_melted = snow * snow_melt_rate
        snow += snowfall - snow_melted
    return snow