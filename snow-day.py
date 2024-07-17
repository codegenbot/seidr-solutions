def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = round(initial_snow, 6)
    for _ in range(hours):
        total_snow *= 1 - melting_rate
        total_snow += round(rate_of_snowfall, 6)
    return round(total_snow, 6)