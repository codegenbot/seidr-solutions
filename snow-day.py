def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snow = snow - (snow * snow_melt_rate) + snow_fall_rate
        if snow < 0:
            snow = 0
    return round(snow, 15)