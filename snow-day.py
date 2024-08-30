def calculate_snow(hours, initial_snow, rate, melt_rate):
    total_snow = 0
    for _ in range(int(hours)):
        total_snow += initial_snow + rate - melt_rate * (total_snow + initial_snow)
    return round(total_snow, 10)


# Take user input
hours = int(input())
initial_snow = float(input())
rate = float(input())
melt_rate = float(input())

print(calculate_snow(hours, initial_snow, rate, melt_rate))