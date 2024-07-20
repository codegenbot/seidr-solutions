def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = round(initial_snow, 5)
    for _ in range(hours):
        melted = min(total_snow, melt_rate) 
        total_snow -= melted
        added = min(1e9, rate)  
        total_snow += added
    return round(total_snow, 5)