def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snow_melted = snow * snow_melt_rate
        snow = (snow - snow_melted) + snow_fall_rate
    return snow