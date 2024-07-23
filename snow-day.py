def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        new_snow = rate_of_fall - melting_rate * total_snow
        total_snow += new_snow
    return round(total_snow, 6)