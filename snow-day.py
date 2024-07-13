def snow_day(hours, current_snow, rate, melt_rate):
    return (current_snow + hours * rate) - (hours * melt_rate)