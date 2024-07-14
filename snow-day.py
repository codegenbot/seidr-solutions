def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = float(initial_snow)
    for _ in range(int(hours)):
        if snow + rate_of_snowfall - melting_rate > 0:
            snow += rate_of_snowfall - melting_rate
        else:
            snow = round(max(0, snow + rate_of_snowfall - melting_rate), 2)
    return str(round(snow, 2))