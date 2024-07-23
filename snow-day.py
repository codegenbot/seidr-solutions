def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = float(initial_snow)
    for _ in range(hours):
        current_snow += rate_of_snowfall
        excess_snow = max(0, current_snow - (1 / melting_rate))
        if excess_snow > 0:
            current_snow -= excess_snow
    return round(current_snow, 2)