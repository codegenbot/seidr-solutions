def snow_day(hours, ground_snow, rate_snow, melting_rate):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += rate_snow
        total_snow *= 1 - melting_rate
    return round(total_snow, 6)


# Example usage:
hours = int(input())
ground_snow = float(input())
rate_snow = float(input())
melting_rate = float(input())

print(snow_day(hours, ground_snow, rate_snow, melting_rate))