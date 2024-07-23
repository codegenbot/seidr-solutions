```
def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = float(initial_snow)
    for _ in range(hours):
        new_snow = total_snow + rate_of_fall - melting_rate * total_snow
        total_snow = round(new_snow, 6)
    return str(total_snow)

hours = int(input("Enter the number of hours: "))
initial_snow = float(input("Enter initial snow in inches: "))
rate_of_fall = float(input("Enter rate of fall in inches per hour: "))
melting_rate = float(input("Enter melting rate in inches per hour: "))

print(snow_day(hours, initial_snow, rate_of_fall, melting_rate))