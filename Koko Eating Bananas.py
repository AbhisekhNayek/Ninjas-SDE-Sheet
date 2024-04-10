def minimumRateToEatBananas(v: [int], h: int) -> int:

    def calculate_time(speed):

        return sum((pile + speed - 1) // speed for pile in v)

    start, end = 1, max(v)

    while start <= end:

        mid = (start + end) // 2
        time_required = calculate_time(mid)
        
        if time_required <= h:
            end = mid - 1
        else:
            start = mid + 1

    return start
