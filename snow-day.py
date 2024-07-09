```
from decimal import Decimal, getcontext

def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    getcontext().prec = 6
    ground_snow = Decimal(str(ground_snow))
    for _ in range(hours):
        ground_snow += Decimal(str(rate_snowfall))
        ground_snow -= (Decimal('1') * ground_snow) / Decimal(str(1 / (1 - melt_rate)))
    return float(ground_snow)