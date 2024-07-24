from math import fsum

def snow_day(hours, initial_snow, snow_rate, melting_rate):
    return fsum([initial_snow, (hours * snow_rate)]) - (hours * initial_snow * melting_rate)