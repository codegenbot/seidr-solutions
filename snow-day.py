Here is the completed code:

def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        if snow > 0:
            snow -= snow * melting_rate
    return round(snow, 6)