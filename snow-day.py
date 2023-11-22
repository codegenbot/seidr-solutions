hours = int(input())
snow_ground = float(input())
snow_fall_rate = float(input())
snow_melting_rate = float(input())

for i in range(hours):
    snow_ground *= (1 - snow_melting_rate)
    snow_ground += snow_fall_rate

print(snow_ground)