Here is the solution:

def snow_day(hours, current_snow, rate_of_snowfall, proportion_melting):
    return round(current_snow + hours * rate_of_snowfall - hours * current_snow * proportion_melting, 6)