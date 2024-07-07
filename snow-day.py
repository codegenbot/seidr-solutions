def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        new_snow = initial_snow + rate_of_snowfall
        total_snow = round(new_snow - (new_snow * melting_rate), 8)
    return total_snow