def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += rate_of_snowfall
        if total_snow > 0:
            melted = total_snow * melt_rate
            if melted > total_snow:
                return 0.0
            total_snow -= melted
    return total_snow