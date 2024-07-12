def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_fall
        melted = min(
            (total_snow - rate_of_fall) * melting_rate, (total_snow - rate_of_fall)
        )
        total_snow -= melted
    return round(total_snow, 6)