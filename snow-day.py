def snow_day(hours, current_snow, rate_of_snowfall, proportion_melting):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall - (proportion_melting * total_snow)
    return round(total_snow, 6)


input_hours = int(input())
current_snow = float(input())
rate_of_snowfall = float(input())
proportion_melting = float(input())

output_snow = snow_day(input_hours, current_snow, rate_of_snowfall, proportion_melting)
print(output_snow)