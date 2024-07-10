def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow -= max(0, round(current_snow * proportion_melting, 10))  
        current_snow += round(rate_of_snowfall, 10) 
    return round(current_snow, 10)