Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting_per_hour):
    return round(initial_snow + hours * rate_of_snowfall - hours * initial_snow * proportion_melting_per_hour, 6)