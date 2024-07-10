def snow_day(hours, initial_snow_feet, rate_of_snowfall_feet, proportion_melting):
    initial_snow_inches = initial_snow_feet * 12
    current_snow_inches = initial_snow_inches
    for _ in range(hours):
        melting_inches = int(current_snow_inches) * (1 - proportion_melting)
        current_snow_inches = int(current_snow_inches) + int(rate_of_snowfall_feet * 12) - max(0, int(current_snow_inches)) 
    return round(current_snow_inches / 12.0, 2)