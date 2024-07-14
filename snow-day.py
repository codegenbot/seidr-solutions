def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = float(initial_snow)
    for _ in range(int(hours)):
        if snow < 0:
            snow = 0
        else:
            snow += rate_of_snowfall - melting_rate
    return str(round(snow, 2))