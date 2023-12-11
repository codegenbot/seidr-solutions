def snow_day(hours, initial_snow, snowfall_rate, melting_rate):
    # Initialize variables
    current_snow = initial_snow
    total_snow = 0
    
    for i in range(hours):
        # Calculate new snowfall
        new_snow = snowfall_rate * (1 - melting_rate) ** i
        
        # Add new snow to current snow
        current_snow += new_snow
        
        # Calculate melted snow
        melted_snow = melting_rate * current_snow
        
        # Subtract melted snow from current snow
        current_snow -= melted_snow
        
        # Add current snow to total snow
        total_snow += current_snow
    
    return total_snow