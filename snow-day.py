from decimal import Decimal, getcontext

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    getcontext().prec = 28 
    total_snow = Decimal(initial_snow)
    for _ in range(hours): 
        total_snow += Decimal(rate_of_snowfall)
        total_snow -= Decimal(melting_rate) * total_snow / (1 if total_snow > 0 else 1)
    return float(total_snow)