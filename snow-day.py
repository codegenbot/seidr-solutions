```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snowfall  
        rate_of_snowfall *= (1 - proportion_melting)
        snow *= (1 - proportion_melting)
    return round(snow, 2)

snow_day(4, 0.5, 1.0, 0.05)