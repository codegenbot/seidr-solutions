```
def snow_day(hours, initial_snow_feet, rate_of_snowfall_feet, proportion_melting):
    initial_snow_inches = initial_snow_feet * 12
    snow_per_hour_inches = rate_of_snowfall_feet * 12 
    current_snow = initial_snow_inches
    for _ in range(hours):
        melted_snow = int(current_snow) * proportion_melting * 12  
        current_snow -= melted_snow  
        current_snow += snow_per_hour_inches 
    return round(current_snow / 12, 10)