def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    getcontext().prec = 30
    for _ in range(hours):
        ground_snow += Decimal(str(float(rate_snowfall)))
        ground_snow -= ground_snow * Decimal(str(float(melt_rate)))
    return str(round(float(ground_snow), 6))