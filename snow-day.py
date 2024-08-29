def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting_per_hour):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall - (total_snow * proportion_melting_per_hour)
    return round(total_snow, 10)