def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = 0
    for _ in range(int(hours)):
        total_snow += rate_of_fall - melting_rate * (initial_snow + rate_of_fall) / (
            1 - melting_rate
        )
    return round(total_snow, 5)