def snow_day(hours, ground_snow, snowfall_rate, melt_per_hour):
    # Calculate the amount of new snow that falls in each hour
    new_snow = hours * snowfall_rate
    
    # Calculate the amount of snow that melts in each hour
    melted_snow = ground_snow * melt_per_hour
    
    # Calculate the total amount of snow on the ground after all hours have passed
    total_snow = ground_snow + new_snow - melted_snow
    
    return total_snow