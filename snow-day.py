```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = float(initial_snow)
    for _ in range(hours):
        melted_snow = min(current_snow, (current_snow * melting_rate))
        current_snow -= melted_snow  # Apply melting
        current_snow += rate_of_snowfall  # Apply snowfall
    return round(current_snow, 2)