def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += total_snow * rate  # add snowfall after melting
        if total_snow > 0:
            total_snow -= total_snow * melt_rate
    return round(total_snow, 5)