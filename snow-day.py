def snow_day(hours, initial_snow, snowfall_rate, melting_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += snowfall_rate
        current_snow *= 1 - melting_rate
    return round(current_snow, 8)