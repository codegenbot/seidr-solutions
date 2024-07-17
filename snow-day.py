Here is the solution:

def snow_day(hours, ground_snow, rate_of_fall, melting_rate):
    return round(ground_snow + hours * rate_of_fall - hours * melting_rate, 8)