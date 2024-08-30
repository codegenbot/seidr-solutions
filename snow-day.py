def snow_day(hours, current_snow, rate_of_fall, melting_rate):
    for _ in range(hours):
        current_snow += rate_of_fall
        current_snow -= melting_rate * current_snow
    return round(current_snow, 6)