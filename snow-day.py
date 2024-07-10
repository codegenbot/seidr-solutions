def snow_day(hours, initial_snow_feet, rate_of_snowfall_feet, proportion_melting):
    initial_snow_inches = int(initial_snow_feet * 12)
    current_snow = initial_snow_inches
    for _ in range(hours):
        melted_inches = max(0, int(current_snow / 12) * 0.0833)  
        current_snow += rate_of_snowfall_feet * 12 - melted_inches 
    return round(current_snow / 12, 10)