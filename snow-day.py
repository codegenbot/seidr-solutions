```
def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_melting_per_hour):
    snow_on_ground = initial_snow
    for _ in range(hours):
        snow_on_ground += rate_of_snow_fall - (proportion_melting_per_hour * snow_on_ground)
    return round(snow_on_ground, 8)