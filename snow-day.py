from decimal import Decimal, getcontext

def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    getcontext().prec = 30
    ground_snow = Decimal(str(ground_snow))
    for _ in range(hours):
        ground_snow += Decimal(str(rate_snowfall))
        ground_snow -= ground_snow * Decimal(str(melt_rate))
    return str(round(float(ground_snow), 6))