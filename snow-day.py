Here is the solution:

def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_fall
        if total_snow > initial_snow:
            excess_snow = total_snow - initial_snow
            total_snow -= (excess_snow * melting_rate)
        else:
            break
    return round(total_snow, 6)