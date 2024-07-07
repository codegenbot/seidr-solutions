def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    return round(initial_snow + sum(rate_of_fall for _ in range(hours)) - sum(melt_rate for _ in range(hours)), 6)