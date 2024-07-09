def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += int(rate_of_snowfall) - int(melting_rate)
    return total_snow