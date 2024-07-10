def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    current_snow = int(initial_snow * (10**10))  
    for _ in range(hours):
        current_snow -= max(0, int(current_snow * (proportion_melting * (10**10))))  
        current_snow += int(rate_of_snowfall * (10**10))
    return round(float(current_snow) / (10**10), 10)