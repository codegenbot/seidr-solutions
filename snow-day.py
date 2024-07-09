from decimal import Decimal, getcontext

def snow_day():
    hours = float(input("Enter the number of hours: "))
    ground_snow = float(input("Enter the amount of snow on the ground: "))
    rate_snowfall = float(input("Enter the rate of snow fall: "))
    melt_rate = float(input("Enter the proportion of snow melting per hour: "))

    getcontext().prec = 30
    ground_snow = Decimal(str(ground_snow))
    for _ in range(int(hours)):
        ground_snow += Decimal(str(rate_snowfall))
        ground_snow -= ground_snow * Decimal(str(melt_rate))
    return str(round(float(ground_snow), 6))

print(snow_day())