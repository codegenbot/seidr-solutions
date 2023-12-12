hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_proportion = float(input())

snow_on_ground = initial_snow

for i in range(hours):
    snow_on_ground += rate_of_snowfall - melting_proportion*snow_on_ground

print(snow_on_ground)