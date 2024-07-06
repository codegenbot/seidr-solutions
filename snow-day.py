def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    # Calculate the amount of snow that falls in each hour
    snow_fallen = round(snow_fall_rate * hours)
    
    # Calculate the amount of snow that melts in each hour
    snow_melted = round(melting_proportion * (snow_on_ground + snow_fallen))
    
    # Calculate the total amount of snow on the ground after the given hours
    snow_on_ground += snow_fallen - snow_melted
    
    return int(snow_on_ground)