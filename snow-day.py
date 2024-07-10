def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    current_snow = initial_snow
    for _ in range(hours):
        new_snow = min(current_snow + rate_of_snowfall, 100)
        current_snow = max(0, current_snow - (current_snow * proportion_melting))
        current_snow += new_snow
    return round(current_snow, 7)