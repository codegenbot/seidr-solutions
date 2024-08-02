Here is the Python code for the snow-day problem:

def snow_day(hours, initial_snow, rate_snowfall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_snowfall
        snow *= (1 - melt_rate)
    return snow