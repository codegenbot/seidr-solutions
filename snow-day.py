from decimal import Decimal, getcontext

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    getcontext().prec = 28 
    return float(Decimal(initial_snow) + (Decimal(rate_of_snowfall) * Decimal(hours)) - (Decimal(melting_rate) * Decimal(hours)))