def snow_day(hours, ground_snow, rate_of_snowfall, melting_rate):
    for _ in range(hours):
        ground_snow += rate_of_snowfall
        ground_snow *= 1 - melting_rate
    return round(ground_snow, 6)