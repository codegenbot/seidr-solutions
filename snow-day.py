def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        new_snow = initial_snow + rate_of_fall - melting_rate * initial_snow
        total_snow = new_snow
        initial_snow = new_snow
    return round(total_snow, 6)