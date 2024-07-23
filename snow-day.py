def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = float(initial_snow)
    for _ in range(hours):
        excess_melted = min(current_snow * melting_rate, 1.0)
        current_snow -= excess_melted
        current_snow += rate_of_snowfall
    return round(current_snow, 2)