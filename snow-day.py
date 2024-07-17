def snow_day(hours, initial_snow, rate_snow, melt_rate):
    total_snow = initial_snow
    for _ in range(int(hours)):
        total_snow += rate_snow
        total_snow *= 1 - melt_rate
    return round(total_snow, 10)