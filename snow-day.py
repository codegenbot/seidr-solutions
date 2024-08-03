def snow_day(hours, initial_snow, rate, melt_rate):
    snow = initial_snow + rate * hours
    for _ in range(int(hours)):
        snow += rate
        if snow > 0:
            snow -= snow * melt_rate
    return round(snow, 6)