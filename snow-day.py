def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall  
        melted_amount = min(snow, rate_of_fall / melt_rate)  
        if melt_rate > 0:
            snow -= melted_amount  
    return round(snow, 6)