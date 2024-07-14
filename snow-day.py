def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = float(initial_snow)
    for _ in range(int(hours)):
        snow += rate_of_snowfall - min(snow + rate_of_snowfall, 1) if snow > 0 else 0
        snow -= min(melting_rate * (snow + 0.0001), snow)
    return str(format(snow, ".2f"))