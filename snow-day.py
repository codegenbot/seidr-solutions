Here is the solution:

def snow_day(hours, current_snow, rate, melt):
    for _ in range(hours):
        current_snow += rate
        current_snow -= current_snow * melt
    return round(current_snow, 10)