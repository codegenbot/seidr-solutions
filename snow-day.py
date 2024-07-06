def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    current_snow = snow_on_ground
    total_snow = 0
    
    for i in range(hours):
        new_snow = (i + 1) * snow_fall_rate
        melted_snow = min(new_snow, current_snow) * melting_proportion
        current_snow += new_snow - melted_snow
        total_snow += new_snow
    
    return round(total_snow, 1)