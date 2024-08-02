def snow_day(hours, initial_snow, rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate
        snow -= snow * melt_rate / 100
    return round(snow, 8)