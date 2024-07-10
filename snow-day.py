def snow_day(hours, initial_snow, rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate - melt_rate
    return round(snow, 6)