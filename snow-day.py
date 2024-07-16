def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow + (rate_of_snowfall / 60) * hours - (melting_rate / 60) * hours
    return round(total_snow, 2)

if __name__ == "__main__":
    hours = int(input())
    initial_snow = float(input())
    rate_of_snowfall = float(input())
    melting_rate = float(input())

    print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))