Here is the solution to the problem:

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snowfall
        if total_snow > 0:
            excess_snow = math.floor(total_snow * (1 - melting_rate))
            total_snow -= excess_snow
    return round(total_snow, 10)