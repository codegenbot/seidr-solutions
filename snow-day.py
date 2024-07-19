```
def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    return initial_snow + (rate_of_fall * min(hours, 24)) - (min(hours, 24) * melting_rate)