```
def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    total_snow = snow_on_ground
    for _ in range(hours):
        total_snow = (total_snow * (1 - proportion_melting_per_hour)) + rate_of_snow_fall
    return round(total_snow, 8)