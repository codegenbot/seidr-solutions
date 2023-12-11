def snow_day(hours, initial_snow, snowfall_rate, melt_rate):
    # Initialize variables
    current_snow = initial_snow
    total_snow = 0
    
    # Loop through each hour
    for i in range(hours):
        # Add new snow
        current_snow += snowfall_rate * (1 - melt_rate) ** i
        
        # Melt the current snow
        current_snow -= melt_rate * current_snow
        
        # Keep track of total snow
        total_snow += current_snow
    
    return total_snow