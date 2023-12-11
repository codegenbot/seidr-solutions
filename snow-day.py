def snow_day(hours, initial_snow, snow_fall, melt_rate):
    # Initialize variables
    current_snow = initial_snow
    total_snow = 0
    
    for i in range(hours):
        # Calculate the amount of snow that has melted in the current hour
        melted_snow = current_snow * melt_rate
        
        # Add new snow and subtract the melted snow from the total amount of snow on the ground
        current_snow += snow_fall - melted_snow
        
        # Keep track of total snow
        total_snow += current_snow
    
    return total_snow