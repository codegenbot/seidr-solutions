def snow_day(hours, initial_snow_feet, rate_of_snowfall_feet, proportion_melting):
    initial_snow_inches = initial_snow_feet * 12
    current_snow = initial_snow_inches
    for _ in range(hours):
        current_snow += rate_of_snowfall_feet * 12 
        melting_inches = max(0, int(current_snow / 12) * 12 * proportion_melting)
        current_snow -= melting_inches
    return round(current_snow / 12, 2)