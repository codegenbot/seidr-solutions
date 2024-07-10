from decimal import Decimal, getcontext

def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    getcontext().prec = 20
    current_snow = Decimal(initial_snow)
    for _ in range(hours):
        current_snow += Decimal(rate_of_snowfall) 
        current_snow -= max(0, current_snow * Decimal(proportion_melting)) 
    return float(current_snow)