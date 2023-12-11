def snow_day(hours, initial_snow, snowfall_rate, melt_proportion):
    # Initialize variables
    current_snow = initial_snow
    total_snow = 0
    
    for i in range(hours):
        # Add new snow
        current_snow += snowfall_rate * (1 - melt_proportion)
        
        # Melt the existing snow
        current_snow -= melt_proportion * current_snow
        
        # Keep track of total snow
        total_snow += current_snow
    
    return total_snow