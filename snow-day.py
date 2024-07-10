initial_snow = float(input("Enter initial amount of snow on the ground: "))
while initial_snow <= 0:
    print("Please enter a positive value for initial snow.")
    initial_snow = float(input("Enter initial amount of snow on the ground: "))

rate_of_snowfall = float(input("Enter rate of snow fall per hour: "))
while rate_of_snowfall <= 0:
    print("Please enter a positive value for snowfall rate.")
    rate_of_snowfall = float(input("Enter rate of snow fall per hour: "))

melting_rate = float(input("Enter proportion of snow melting per hour: "))
while not 0 <= melting_rate <= 1:
    print("Please enter a value between 0 and 1.")
    melting_rate = float(input("Enter proportion of snow melting per hour: "))

total_hours = int(input("Enter number of hours: "))

total_snow = initial_snow
for _ in range(total_hours): 
    total_snow += rate_of_snowfall
    total_snow -= melting_rate * total_snow

print(total_snow)