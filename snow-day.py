import math

def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = float(initial_snow)
    for _ in range(hours):
        total_snow = round(math.fsum([total_snow + rate_of_fall - total_snow * melting_rate]), 6)
    return str(total_snow)