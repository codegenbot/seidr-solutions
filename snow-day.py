def snow_day(hours, initial_snow, snow_fall, melt_rate):
    snow = initial_snow
    for i in range(1, hours+1):
        snow += snow_fall * (1 - math.exp(-melt_rate * i))
    return snow