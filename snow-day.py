import math
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return math.fsum([float(initial_snow), (rate_of_snowfall * hours), - (melting_rate * hours)])