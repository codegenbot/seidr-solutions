from decimal import Decimal

def snow_day():
    hours = float(input("Enter number of hours: "))
    while True:
        try:
            if hours > 0:
                break
            print("Please enter a positive integer.")
        except ValueError:
            print("Invalid input. Please enter a number.")

    initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))
    rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
    melting_rate = Decimal(float(input("Enter proportion of snow melting per hour: ")))
    while 0 > melting_rate or melting_rate > 1:
        print("Please enter a value between 0 and 1.")
        melting_rate = Decimal(float(input("Enter proportion of snow melting per hour: ")))

    total_snow = initial_snow
    for _ in range(int(hours)):
        total_snow += rate_of_snowfall
        total_snow -= melting_rate * total_snow

    return float(total_snow)

print(snow_day())