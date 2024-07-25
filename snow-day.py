Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snowfall
        snow *= (1 - melt_rate)
    return round(snow, 5)