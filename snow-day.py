```
from decimal import Decimal, getcontext

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    getcontext().prec = 50
    snow = Decimal(initial_snow)
    for _ in range(hours):
        new_snow = (snow + Decimal(rate_of_snowfall)) - Decimal(melting_rate)
        snow = max(new_snow, 0.0)
    return str(snow).rstrip('0').rstrip('.')