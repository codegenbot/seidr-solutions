def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = float(initial_snow)
    for _ in range(hours):
        current_snow += rate_of_snowfall * 1
        if current_snow > 0:
            excess_snow = min(current_snow, (1 / melting_rate) * 1)
            current_snow -= excess_snow
    return round(float(current_snow), 9)