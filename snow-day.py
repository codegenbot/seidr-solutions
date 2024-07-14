def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    return (initial_snow + hours * rate_of_fall) / (1 - melt_rate) ** hours