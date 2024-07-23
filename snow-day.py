def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = float(initial_snow)
    for _ in range(hours):
        additional_snow = rate_of_snowfall * 60  
        current_snow += additional_snow
        if current_snow > 0:
            excess_snow = min(current_snow, (1 / melting_rate))
            current_snow -= excess_snow
    return round(current_snow, 8)