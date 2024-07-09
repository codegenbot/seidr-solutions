from decimal import Decimal, getcontext

getcontext().prec = 28 

initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))
rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
while True:
    try:
        melting_rate = float(input("Enter proportion of snow melting per hour: "))
        if 0 <= Decimal(melting_rate) <= Decimal('1'):
            break
        else:
            print("Please enter a value between 0 and 1.")
    except ValueError:
        print("Invalid input. Please enter a number.")

total_snow = initial_snow
for _ in range(int(input("Enter number of hours: "))): 
    total_snow += rate_of_snowfall
    total_snow -= Decimal(melting_rate) * total_snow

print(float(total_snow))