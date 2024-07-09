from decimal import Decimal, getcontext

getcontext().prec = 28 

initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))
rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
melting_rate = float(input("Enter proportion of snow melting per hour: "))
hours = int(input("Enter number of hours: "))

total_snow = initial_snow
for _ in range(hours): 
    total_snow += rate_of_snowfall
    total_snow -= Decimal(melting_rate) * total_snow

print(float(total_snow))