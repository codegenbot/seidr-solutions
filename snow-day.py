```
def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    for _ in range(hours):
        new_snow = snow_on_ground + rate_of_snow_fall
        snow_on_ground *= (1 - proportion_melting_per_hour)
        snow_on_ground += new_snow  
    return snow_on_ground