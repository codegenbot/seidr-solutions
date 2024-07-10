Here is the solution:

def snow_day(hours, initial_snow, rate, melting_rate):
    return initial_snow + (rate - melting_rate) * hours