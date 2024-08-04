def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = 0
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_fall
        if current_snow > 0:
            current_snow -= current_snow * melting_rate
        if current_snow < 0:
            current_snow = 0
        total_snow += current_snow
    return total_snow