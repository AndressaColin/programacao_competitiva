import math 

class Solution(object):
    def repairCars(self, ranks, cars):
        minRank = min(ranks)
        maxRank = max(ranks)
        freq = [0] * 101
        for rank in ranks:
           freq[rank] += 1 

        low, high = 1, minRank * cars * cars

        def canRepairCarsInTime(mid):
                cars_repaired = 0
                for rank in range(1, maxRank + 1):
                    n_cars = math.floor(math.sqrt(mid / rank))
                    cars_repaired += n_cars * freq[rank]
                return cars_repaired

        while low < high:
                mid = (low + high) // 2
                if canRepairCarsInTime(mid) >= cars:
                    high = mid  
                else:
                    low = mid + 1  
        return low  

        

        