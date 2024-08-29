def snow_day(hours, current_snow, rate_of_fall, melting_rate):
    new_snow = 0.0
    total_snow = 0.0

    for _ in range(hours):
        total_snow += new_snow + rate_of_fall
        new_snow = max(0.0, (total_snow - current_snow) * melting_rate)

    return round(total_snow, 8)