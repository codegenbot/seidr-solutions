from decimal import Decimal, getcontext

def snow_day(hours, initial_snow, rate, melt_rate):
    getcontext().prec = 12
    current_snow = Decimal(initial_snow)
    for _ in range(hours):
        current_snow += Decimal(rate)
        current_snow = max(0, current_snow - Decimal(melt_rate))
    return float(current_snow)