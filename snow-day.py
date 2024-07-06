def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for hour in range(hours):
        snow_fall = initial_snow + rate_of_snowfall
        total_snow += round(snow_fall, 10) - int(hours * melting_rate)
    return round(initial_snow + total_snow, 10)