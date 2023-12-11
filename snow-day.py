def snow_day(hours, initial_snow, snowfall_rate, melt_rate):
    snow = initial_snow
    for i in range(hours):
        snow += snowfall_rate * (1 - melt_rate) ** (i + 1)
        snow -= snow * melt_rate
    return snow