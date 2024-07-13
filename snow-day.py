```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = initial_snow
    for _ in range(hours):
        melted_snow = total_snow * proportion_melting  
        total_snow -= melted_snow  
        total_snow += rate_of_snowfall  
    return round(total_snow, 6)