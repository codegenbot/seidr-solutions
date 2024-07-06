def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for hour in range(hours):
        snow_fall = float(rate_of_snowfall)
        total_snow += snow_fall - (hour * melting_rate)
    return round(total_snow, 10)