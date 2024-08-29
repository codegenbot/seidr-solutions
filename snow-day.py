def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    remaining_snow = initial_snow
    for _ in range(hours):
        remaining_snow += rate_of_snowfall - melting_rate
    return remaining_snow