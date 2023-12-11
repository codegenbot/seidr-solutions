def snow_day(hours, initial_snow, snow_fall, melt_rate):
    # Initialize variables
    current_snow = initial_snow
    total_snow = 0
    
    for i in range(hours):
        # Add new snow
        current_snow += snow_fall
        
        # Melt the existing snow
        current_snow *= (1 - melt_rate)
        
        # Keep track of total snow
        total_snow += current_snow
    
    return total_snow