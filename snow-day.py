def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snow_melted = round(snow * (snow_melt_rate / 100), 10)
        snow += snow_fall_rate
        snow = round(snow - snow_melted, 10)
    return snow