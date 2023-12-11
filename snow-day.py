def snow_day(hours, ground_snow, snow_fall, melt_rate):
    # Add new snow
    new_snow = hours * snow_fall
    total_snow = ground_snow + new_snow
    
    # Calculate melted snow
    melted_snow = total_snow * melt_rate
    remaining_snow = total_snow - melted_snow
    
    return remaining_snow