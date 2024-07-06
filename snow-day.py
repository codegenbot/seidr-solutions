def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        snow_fall = round(rate_of_snowfall, 10)
        melt = round(total_snow * melting_rate, 10)
        total_snow += snow_fall - melt
    return round(total_snow, 10)