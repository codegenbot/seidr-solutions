```
def snow_day(hours, snow_on_ground: float, rate_of_snow_fall: float, proportion_melting_per_hour: float):
    snow_on_ground = snow_on_ground + rate_of_snow_fall
    for _ in range(hours - 1):
        snow_on_ground *= (1 - proportion_melting_per_hour)
        snow_on_ground += rate_of_snow_fall
    return round(snow_on_ground, 8)