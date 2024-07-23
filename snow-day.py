def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        new_snow = total_snow + rate_of_fall - melting_rate * total_snow
        total_snow = round(new_snow, 6)
    return total_snow