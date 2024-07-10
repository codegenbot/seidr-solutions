hours = int(input("Enter number of hours: "))
snow_on_ground = float(input("Enter initial amount of snow on the ground: "))
rate_of_snowfall = float(input("Enter rate of snow fall per hour: "))
melting_rate = float(input("Enter proportion of snow melting per hour (0 to 1): "))

total_snow = snow_on_ground
for _ in range(hours):
    total_snow *= (1 - melting_rate) 
    total_snow += rate_of_snowfall  

print(total_snow)