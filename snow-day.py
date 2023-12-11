def snow_day(hours, initial_snow, snow_fall_rate, melt_rate):
    snow = initial_snow
    for i in range(hours):
        new_snow = snow_fall_rate * (1 - math.exp(-melt_rate * i))
        snow += new_snow
    return snow