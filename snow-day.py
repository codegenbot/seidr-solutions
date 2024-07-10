from decimal import Decimal, getcontext

getcontext().prec = 28

initial_snow = Decimal(0)
while initial_snow <= 0:
    print("Please enter a positive value for initial snow.")
    initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))

while True:
    try:
        rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
        if rate_of_snowfall <= 0:
            print("Please enter a positive value for snowfall rate.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

while True:
    try:
        melting_rate = Decimal(float(input("Enter proportion of snow melting per hour: ")))
        if not (melting_rate <= Decimal("1") and melting_rate >= Decimal("0")):
            print("Please enter a value between 0 and 1.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

total_hours = int(Decimal(input("Enter number of hours: ")).to_decimal())

getcontext().prec = 28
total_snow = initial_snow
for _ in range(int(total_hours)):
    total_snow += rate_of_snowfall * (1 - melting_rate)
print(float(total_snow))