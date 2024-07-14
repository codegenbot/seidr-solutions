def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = float(initial_snow)
    for _ in range(int(hours)):
        snow += rate_of_snowfall - floor(snow) if snow > 0 else 0
    return str(format(snow + 0.0001, ".2f"))