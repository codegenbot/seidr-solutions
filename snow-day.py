def snow_day(hours, initial_snow, snowfall_rate, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += snowfall_rate
        snow *= 1 - melting_rate
    return snow


if __name__ == "__main__":
    hours = int(input())
    initial_snow = float(input())
    snowfall_rate = float(input())
    melting_rate = float(input())
    result = snow_day(hours, initial_snow, snowfall_rate, melting_rate)
    print(result)