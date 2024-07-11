def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += initial_snow + rate_of_fall * (_+1) - (total_snow + rate_of_fall) * melt_rate  
    return round(total_snow, 5)