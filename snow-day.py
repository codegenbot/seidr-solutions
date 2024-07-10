```
from decimal import Decimal, getcontext

getcontext().prec = 28

initial_snow = Decimal(0)
while initial_snow <= 0:
    initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))

rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
melting_rate = Decimal(float(input("Enter proportion of snow melting per hour: ")))

while melting_rate > 1 or melting_rate < 0:
    print("Please enter a value between 0 and 1.")
    melting_rate = Decimal(float(input("Enter proportion of snow melting per hour: ")))

total_hours = int(Decimal(input("Enter number of hours: ")).to_decimal())

getcontext().prec = 28
total_snow = initial_snow
for _ in range(int(total_hours)):
    total_snow += rate_of_snowfall
    total_snow -= melting_rate * total_snow

print(float(total_snow))