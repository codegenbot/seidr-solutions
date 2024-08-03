def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        snow -= snow * melt_rate / 100
    return round(snow, 6)