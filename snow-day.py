def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_fall
        if current_snow > 0:
            melted = current_snow * melting_rate
            current_snow -= melted
    return round(current_snow, 5)