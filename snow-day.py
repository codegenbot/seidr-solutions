def snow_day(hours, initial_snow, rate, melt):
    snow = initial_snow
    for i in range(hours):
        snow += rate * (1 - math.exp(-melt))
    return snow