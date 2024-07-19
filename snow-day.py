```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_fall
        current_snow -= min(current_snow, melt_rate)
    return round(current_snow, 6)

hours = int(input("Enter the number of hours: "))
initial_snow = float(input("Enter the initial snow on the ground: "))
rate_of_fall = float(input("Enter the rate of snow fall per hour: "))
melt_rate = float(input("Enter the proportion of snow melting per hour: "))

snow_amount = snow_day(hours, initial_snow, rate_of_fall, melt_rate)
print(f"After {hours} hours, there will be {snow_amount} inches of snow.")