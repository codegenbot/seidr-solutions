def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0
    remaining_snow = float(initial_snow)

    for _ in range(int(hours)):
        remaining_snow += rate_of_snowfall
        remaining_snow *= 1 - melting_rate

    return round(remaining_snow, 6)