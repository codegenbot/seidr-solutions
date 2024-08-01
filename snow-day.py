Here is the solution:

def snow_day(hours, snow_on_ground, rate_of_snowfall, melt_per_hour):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall - (total_snow * melt_per_hour)
    return total_snow