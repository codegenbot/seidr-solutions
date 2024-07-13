hours = int(input())
snow_on_ground = float(input())
rate_of_snow_fall = float(input())
proportion_of_snow_melting = float(input())

snow_on_ground_after_hours = snow_on_ground + hours * (rate_of_snow_fall - proportion_of_snow_melting)
print(snow_on_ground_after_hours)