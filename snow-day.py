```
from decimal import Decimal, getcontext

getcontext().prec = 28 

total_snow = Decimal(0)
while True:
    initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))
    if initial_snow > 0:
        break
    print("Please enter a positive value for initial snow.")

while True:
    rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
    if rate_of_snowfall > 0:
        break
    print("Please enter a positive value for snowfall rate.")

while True:
    melting_rate = float(input("Enter proportion of snow melting per hour: "))
    if 0 <= melting_rate <= 1:
        break
    print("Please enter a value between 0 and 1.")

total_hours = int(input("Enter number of hours: "))

initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))
for _ in range(total_hours):
    new_snow = initial_snow + rate_of_snowfall - (Decimal(str(melting_rate * float(initial_snow))))
    initial_snow = new_snow
    total_snow += new_snow

print(float(total_snow))