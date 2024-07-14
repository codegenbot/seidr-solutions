```Python
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = float(initial_snow)
    for _ in range(int(hours)):
        snow += rate_of_snowfall
        snow -= melting_rate
    return str(round(snow, 2)).lstrip('0').rstrip('.') or '0'


hours = float(input("Enter the number of hours: "))
while hours < 0:
    print("Please enter a positive integer for the number of hours.")
    hours = float(input("Enter the number of hours: "))

initial_snow = float(input("Enter initial amount of snow: "))
while initial_snow < 0:
    print("Please enter a non-negative value for the amount of snow.")
    initial_snow = float(input("Enter initial amount of snow: "))

rate_of_snowfall = float(input("Enter rate of snow fall: "))
while rate_of_snowfall < 0:
    print("Please enter a non-negative value for the rate of snowfall.")
    rate_of_snowfall = float(input("Enter rate of snow fall: "))

melting_rate = float(input("Enter melting rate per hour: "))
while melting_rate < 0:
    print("Please enter a non-negative value for the melting rate.")
    melting_rate = float(input("Enter melting rate per hour: "))

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))