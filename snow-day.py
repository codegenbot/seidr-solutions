def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        new_snow = round(rate_of_fall) / 100
        current_snow += new_snow  
        melted = round(melt_rate * current_snow, 6)
        current_snow -= melted
        current_snow = max(0, current_snow) 
    return round(current_snow, 6)