hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
proportion_of_melting = float(input())

for i in range(hours):
    snow_on_ground += snow_fall_rate
    snow_on_ground -= snow_on_ground * proportion_of_melting

print(snow_on_ground)