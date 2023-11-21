hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

snow_fall = snow_fall_rate * hours
snow_melt = snow_on_ground * snow_melt_rate * hours
snow_on_ground = snow_on_ground + snow_fall - snow_melt

print(snow_on_ground)