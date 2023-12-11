def snow_day(hours, ground_snow, snow_fall, melt_rate):
    total_snow = 0
    for i in range(hours):
        total_snow += ground_snow + (snow_fall * (1 - math.exp(-melt_rate * i)))
    return total_snow