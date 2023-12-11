def snow_day(hours, initial_snow, snow_fall_rate, melt_rate):
    snow = initial_snow
    for i in range(hours):
        snow += snow_fall_rate * (1 - melt_rate) ** i
    return snow