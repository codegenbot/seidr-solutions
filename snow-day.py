def snow_day(hours, initial_snow, snow_rate, melt_rate):
    return round(initial_snow + (hours * snow_rate) - ((hours * melt_rate)), 9)