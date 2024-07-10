from decimal import Decimal, getcontext

getcontext().prec = 28 

initial_snow = Decimal(0)
while initial_snow <= 0:
    print("Please enter a positive value for initial snow.")
    initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))

rate_of_snowfall = Decimal(0)
while rate_of_snowfall <= 0:
    print("Please enter a positive value for snowfall rate.")
    rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))

melting_rate = float(input("Enter proportion of snow melting per hour: "))
while not (0 <= melting_rate <= 1):
    print("Please enter a value between 0 and 1.")
    melting_rate = float(input("Enter proportion of snow melting per hour: "))

total_hours = int(input("Enter number of hours: "))

getcontext().prec = 28 
total_snow = initial_snow
for _ in range(total_hours):
    total_snow += rate_of_snowfall
    total_snow -= Decimal(str(melting_rate * float(total_snow)))

print(float(total_snow))