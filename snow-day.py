```
def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    for _ in range(hours):
        snow_on_ground += rate_of_snow_fall  
        snow_on_ground *= (1 - proportion_melting_per_hour)  
    return round(snow_on_ground, 2)