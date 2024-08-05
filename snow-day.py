def snow_day(hours, current_snow, rate_snowfall, melting_rate):
    new_snow = 0.0
    for _ in range(hours):
        new_snow += rate_snowfall
        current_snow += new_snow - (current_snow * melting_rate)
    return round(current_snow, 6)