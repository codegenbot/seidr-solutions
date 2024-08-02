Here is the solution to the problem:

def snow_day(hours, initial_snow, snowfall_rate, melting_rate):
    total_snow = 0.0
    for _ in range(hours):
        new_snow = snowfall_rate
        total_snow += new_snow - (total_snow * melting_rate)
    return total_snow