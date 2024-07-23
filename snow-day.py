```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return format(initial_snow + rate_of_snowfall * hours - melting_rate * hours, '.9f')