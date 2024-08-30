Here is the solution in Python:

def snow_day(hours, initial_snow, rate_snow_fall, melting_rate):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += rate_snow_fall
        if total_snow > initial_snow:
            excess = (total_snow - initial_snow)
            total_snow -= excess * melting_rate
    return round(total_snow, 9)