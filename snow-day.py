Here is the solution:

def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        if melt := max(0, math.floor(snow * (1 - melting_rate))):
            snow -= melt
    return round(snow, 5)