def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        new_snow = rate_of_snowfall
        total_snow += new_snow
        if total_snow > initial_snow:
            melted_snow = (total_snow - initial_snow) * melting_rate
            total_snow -= melted_snow
    return total_snow