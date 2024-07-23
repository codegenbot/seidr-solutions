```
def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    current_snow = snow_on_ground
    for _ in range(hours):
        current_snow += rate_of_snow_fall
        current_snow *= (1 - proportion_melting_per_hour)
    return round(current_snow, 8)