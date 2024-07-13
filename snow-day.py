Here is the solution:

def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    return round((ground_snow + (rate_snowfall * hours)) - ((melt_rate * hours) * ground_snow), 5)