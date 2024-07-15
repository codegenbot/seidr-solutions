def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    snowfall = 0
    snowmelt = 0
    for _ in range(hours):
        snowfall += snow_fall_rate
        snowmelt = snow * snow_melt_rate / 100
        snow = round(snow + snowfall - snowmelt, 15)
    return snow