def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow_on_ground_list = [snow_on_ground]
    for i in range(1, hours + 1):
        net_snow_fall = snow_fall_rate - (snow_melt_rate * snow_on_ground_list[-1])
        snow_on_ground_list.append(snow_on_ground_list[-1] + net_snow_fall)
    return snow_on_ground_list[-1]


# Read input
hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

# Calculate snow on the ground after the given hours
result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)