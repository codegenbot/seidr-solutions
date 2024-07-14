Here is the solution:

def snow_day(hours, initial_snow, rate_snowfall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_snowfall
        if total_snow > 0:
            melted = total_snow * melt_rate
            total_snow -= melted
    return round(total_snow, 5)