```
from decimal import Decimal, getcontext


def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    if not isinstance(hours, int) or hours < 0:
        return 
    if not isinstance(initial_snow, float) or initial_snow < 0:
        return 
    if not isinstance(rate_of_snowfall, float) or rate_of_snowfall < 0:
        return 
    if not isinstance(melting_rate, float) or melting_rate < 0:
        return 

    getcontext().prec = 50
    snow = Decimal(initial_snow)
    for _ in range(hours):
        new_snow = snow + Decimal(rate_of_snowfall) - Decimal(melting_rate)
        snow = max(new_snow, 0.0)
    return str(snow).rstrip("0").rstrip(".")