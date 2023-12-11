def snow_day(hours, initial_snow, snow_fall, melt_rate):
    # Calculate the amount of snow that falls in each hour
    snow_per_hour = hours * snow_fall
    
    # Calculate the amount of snow that melts in each hour
    melted_snow = initial_snow * (1 - math.exp(-melt_rate * hours))
    
    # Calculate the total amount of snow on the ground after the given number of hours
    total_snow = snow_per_hour + melted_snow
    
    return total_snow