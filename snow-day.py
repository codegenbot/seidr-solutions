def snow_day(hrs, ground_snow, rate_snowfall, melt_rate):
    hours = float(hrs)
    ground_snow = float(ground_snow) 
    getcontext().prec = 30
    return str(round(float((Decimal(str(ground_snow)) + Decimal(str(rate_snowfall * hours))) - Decimal(str((melt_rate * hours) * ground_snow))), 6))