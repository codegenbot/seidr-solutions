def snow_day(hours, initial_snow, rate_of_snow_fall, melting_rate):
    total_snow = 0
    current_snow = initial_snow

    for _ in range(hours):
        current_snow += rate_of_snow_fall
        if current_snow > 0:
            current_snow *= 1 - melting_rate

    return round(current_snow, 8)