```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = initial_snow
    for _ in range(hours):
        new_snow = total_snow + rate_of_snowfall
        total_snow = round(new_snow - (new_snow * proportion_melting), 6)
    return total_snow