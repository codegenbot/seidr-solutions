def snow_day(hrs, ground_snow, rate_snowfall, melt_rate):
    hours = float(hrs)
    ground_snow = float(ground_snow)  
    return str(round(float(str(Decimal(str((ground_snow + (rate_snowfall * hours)) - ((melt_rate * hours) * ground_snow))))), 6))