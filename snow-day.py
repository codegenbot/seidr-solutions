def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = round(initial_snow + rate_of_snowfall, 2)
    for _ in range(int(hours)):
        snow += rate_of_snowfall
        while snow > melting_rate:
            snow -= melting_rate
        if snow < 0:
            break
    return round(snow, 2)