def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snowfall
        snow *= (1 - melting_rate)
    return round(snow, 6)