hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_proportion = float(input())

snow_amount = snow_on_ground
for i in range(hours):
    snow_amount += snow_fall_rate
    snow_amount -= (snow_amount * snow_melt_proportion)

print(snow_amount)