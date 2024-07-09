def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    total_snow = float(ground_snow)
    for _ in range(int(hours)):
        total_snow += float(rate_snowfall)
        total_snow -= total_snow * melt_rate
    return str(round(total_snow, 6))