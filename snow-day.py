def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = initial_snow
    total_snow += rate_of_fall * hours  
    total_snow -= total_snow * melt_rate  
    return round(total_snow, 5)