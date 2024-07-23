from decimal import Decimal, getcontext

def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    getcontext().prec = 28  
    snow_on_ground = Decimal(snow_on_ground)
    for _ in range(hours):
        snow_on_ground *= (1 - Decimal(proportion_melting_per_hour)) 
        snow_on_ground += Decimal(rate_of_snow_fall) 
    return round(float(snow_on_ground), 2)