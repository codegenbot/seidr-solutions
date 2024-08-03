Here is the solution:

def snow_day(hours, current_snow, rate_of_snowfall, melting_rate):
    return round(current_snow + hours * rate_of_snowfall - hours * melting_rate, 10)