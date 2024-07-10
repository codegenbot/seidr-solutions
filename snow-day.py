def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_snowfall  # add new snowfall first
        current_snow -= max(0, min(current_snow, current_snow * proportion_melting))  
    return round(current_snow, 10)