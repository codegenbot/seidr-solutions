def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += round(rate_of_snowfall, 10)
        total_snow *= (1 - melting_rate)
    return round(total_snow, 9)