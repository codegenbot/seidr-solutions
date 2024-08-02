def snow_day(hours, initial_snow, snowfall_rate, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += snowfall_rate
        total_snow -= melting_rate * (total_snow > 0)
    return round(total_snow, 5)