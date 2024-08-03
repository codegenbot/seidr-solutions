Here is the solution:

def snow_day(hours, initial_snow, rate_snowfall, proportion_melting):
    return initial_snow + (rate_snowfall * hours) - (proportion_melting * hours)