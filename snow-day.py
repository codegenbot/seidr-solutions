Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting_per_hour):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snowfall
        snow -= snow * proportion_melting_per_hour
    return round(snow, 6)