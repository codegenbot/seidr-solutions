def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for hour in range(hours):
        snow_fall = round(hour * rate_of_snowfall, 10)
        total_snow += round(snow_fall - int(hour * melting_rate), 10)
    return round(initial_snow + total_snow, 10)