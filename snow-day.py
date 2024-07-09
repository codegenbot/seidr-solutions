```
from decimal import Decimal, getcontext

def snow_day():
    getcontext().prec = 28 
    hours = int(input("Enter number of hours: "))
    initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))
    rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
    melting_rate = Decimal(float(input("Enter proportion of snow melting per hour: ")))

    total_snow = Decimal(initial_snow)
    for _ in range(hours): 
        total_snow += rate_of_snowfall
        total_snow -= melting_rate * total_snow / (1 if total_snow > 0 else 1)

    return float(total_snow)

print(snow_day())