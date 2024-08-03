def snow_day(hours, ground_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall
        total_snow -= melting_rate * total_snow
    return total_snow