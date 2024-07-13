```
def snow_day(hours, snow_on_ground, rate_of_snowfall, proportion_melting):
    total_snow = snow_on_ground
    for _ in range(hours):
        total_snow *= 1 - proportion_melting
        total_snow += rate_of_snowfall
    return round(total_snow, 6)