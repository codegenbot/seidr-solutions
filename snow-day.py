def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_fall
        if total_snow > 0:
            excess = total_snow - (1 / (melting_rate * 100))
            if excess > 0:
                total_snow = excess
    return round(total_snow, 5)