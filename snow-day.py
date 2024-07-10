```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_snowfall  
        current_snow -= max(0, current_snow * proportion_melting) 
        current_snow = round(current_snow)
    return current_snow