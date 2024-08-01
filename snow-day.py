def snow_day(hours, initial_snow, rate_of_snow_fall, melting_per_hour):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snow_fall - initial_snow * melting_per_hour
    return round(total_snow, 5)