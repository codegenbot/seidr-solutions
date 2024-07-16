```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):  
        total_snow += rate_of_snowfall / 60 
        total_snow -= melting_rate / 60
    return round(total_snow, 2)

if __name__ == "__main__":
    hours = int(input())
    initial_snow = float(input())
    rate_of_snowfall = float(input())
    melting_rate = float(input())

    print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))