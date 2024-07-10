```
def snow_day(hours, initial_snow_feet, rate_of_snowfall_feet, proportion_melting):
    current_snow = initial_snow_feet * 12
    for _ in range(hours):
        melting_inches = int(current_snow * proportion_melting)
        current_snow -= melting_inches
        current_snow += rate_of_snowfall_feet * 12
    return round(current_snow / 12, 2)