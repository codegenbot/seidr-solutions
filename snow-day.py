def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = float(initial_snow)
    for _ in range(hours):
        additional_snow = rate_of_snowfall
        current_snow += additional_snow
        excess_melting = min(current_snow, (1 / melting_rate))
        current_snow -= excess_melting
    return current_snow