def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        melted = total_snow * melting_rate
        if melted > total_snow:
            return 0.0
        new_snow = rate_of_fall - melted
        if new_snow < 0:
            return round(total_snow, 6)
        total_snow += new_snow
    return round(total_snow, 6)