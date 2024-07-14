```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = round(initial_snow, 2)
    for _ in range(hours):
        snow += int(rate_of_snowfall) - min(int(snow), int(melting_rate))
    return round(snow, 2)