def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for hour in range(hours):
        snow_fall = round(rate_of_snowfall * (1 - melting_rate), 10)
        total_snow += snow_fall
    return round(initial_snow + total_snow, 10)