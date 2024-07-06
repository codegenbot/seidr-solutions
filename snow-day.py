```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for hour in range(hours):
        snow_fall = rate_of_snowfall
        total_snow += round(snow_fall + melting_rate, 10)
    return round(total_snow, 10)