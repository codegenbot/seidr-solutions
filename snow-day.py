def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    return round(initial_snow + float(hours) * float(rate_of_fall) - float(hours) * float(melt_rate), 10)