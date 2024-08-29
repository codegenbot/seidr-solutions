def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = initial_snow + hours * rate_of_fall
    for _ in range(hours):
        if snow > 0:
            snow -= snow * melt_rate
    return snow