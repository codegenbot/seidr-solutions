from decimal import Decimal, getcontext

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    getcontext().prec = 28
    return float(Decimal(str(initial_snow)) + (Decimal(str(rate_of_snowfall)) * Decimal(str(hours))) - (Decimal(str(melting_rate)) * Decimal(str(hours))))