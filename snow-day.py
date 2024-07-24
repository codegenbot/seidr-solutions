def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow = round(initial_snow, 5)
    for _ in range(hours):
        snow = round(snow + rate_of_fall, 5)
        snow = max(0, round(snow - snow * melt_rate, 5))
    return round(snow, 5)