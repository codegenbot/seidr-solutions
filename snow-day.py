```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = round(initial_snow + (rate_of_snowfall * hours), 10) - sum([round(melting_rate, 10) for _ in range(hours)])
    return round(total_snow, 2)