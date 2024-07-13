hours = int(input())
snow_on_ground = float(input())
rate_of_snow_fall = float(input())
proportion_of_snow_melting = float(input())

total_snow_on_ground = snow_on_ground

for i in range(hours):
    total_snow_on_ground += rate_of_snow_fall - (proportion_of_snow_melting * total_snow_on_ground)

print(total_snow_on_ground)