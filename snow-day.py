def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    current_snow = initial_snow
    for _ in range(int(hours)): 
        if _ < int(hours) - 1: 
            new_snow = rate_of_fall 
        else:
            new_snow = rate_of_fall * (hours - int(hours))
        current_snow += new_snow
        current_snow -= min(current_snow, melt_rate)
    return round(current_snow, 6)