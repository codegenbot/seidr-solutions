def snow_day(hours, snow_ground, snow_fall_rate, melt_rate):
    total_snow = 0.0
    for _ in range(int(hours)):
        new_snow = snow_ground + snow_fall_rate
        total_snow += new_snow - melt_rate
        snow_ground = total_snow
    return round(snow_ground, 6)