def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(int(hours)):
        snow = snow + snow_fall_rate - (snow * snow_melt_rate)
        snow = round(snow, 15)
    return snow