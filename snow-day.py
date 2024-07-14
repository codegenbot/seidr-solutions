```
def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_melting_per_hour):
    snow = initial_snow
    for _ in range(hours):
        snow *= 1 - proportion_melting_per_hour
        snow += rate_of_snow_fall
    return round(snow, 5)