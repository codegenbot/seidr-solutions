```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = float(initial_snow)
    for _ in range(hours):
        current_snow += rate_of_snowfall  # Apply snowfall
        melted_snow = max(0, round(current_snow * melting_rate, 12))
        current_snow -= melted_snow  # Apply melting
    return round(current_snow, 12)