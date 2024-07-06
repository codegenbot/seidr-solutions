def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for hour in range(hours):
        snow_fall = rate_of_snowfall
        melting = melting_rate * (total_snow + snow_fall)
        total_snow += round(snow_fall - melting, 10)
    return round(total_snow, 10)