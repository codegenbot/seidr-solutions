from decimal import Decimal, getcontext


def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    getcontext().prec = 50
    snow = Decimal(initial_snow)
    for _ in range(int(hours)):
        snow += Decimal(str(rate_of_snowfall)).quantize(Decimal("0.01"))
        snow -= Decimal(str(melting_rate)).quantize(Decimal("0.01"))
    return str(snow).rstrip("0").rstrip(".").replace(".", "")


while True:
    try:
        hours = int(input("Enter the number of hours: "))
        if hours < 0:
            print("Please enter a positive integer for the number of hours.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

while True:
    try:
        initial_snow = float(input("Enter initial amount of snow: "))
        if initial_snow < 0:
            print("Please enter a non-negative value for the amount of snow.")
        elif initial_snow > 10000:
            print(
                "Initial snow depth cannot be greater than 10000 inches. Please try again."
            )
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

while True:
    try:
        rate_of_snowfall = float(input("Enter rate of snow fall: "))
        if rate_of_snowfall < 0:
            print("Please enter a non-negative value for the rate of snowfall.")
        elif rate_of_snowfall > 1000:
            print(
                "Rate of snowfall cannot be greater than 1000 inches per hour. Please try again."
            )
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

while True:
    try:
        melting_rate = float(input("Enter melting rate per hour: "))
        if melting_rate < 0:
            print("Please enter a non-negative value for the melting rate.")
        elif melting_rate > 1000:
            print(
                "Melting rate cannot be greater than 1000 inches per hour. Please try again."
            )
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(
    snow_day(
        hours,
        Decimal(str(initial_snow)),
        Decimal(str(rate_of_snowfall)),
        Decimal(str(melting_rate)),
    )
)