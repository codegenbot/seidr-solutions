def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        new_snow = rate_of_snowfall
        total_snow += new_snow - (total_snow * melting_rate)
    return round(total_snow, 10)