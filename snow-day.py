def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_fall
        if melting_rate > 0:
            total_snow -= melting_rate * total_snow
    return round(total_snow, 9)