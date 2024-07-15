def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snowfall
        total_snow -= (initial_snow * melting_rate) / 60
    return round(total_snow, 6)