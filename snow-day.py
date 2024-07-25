def snow_day(hours, current_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall
        total_snow -= current_snow * melting_rate
        current_snow = total_snow
    return round(current_snow, 6)