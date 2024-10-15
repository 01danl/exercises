from typing import List

def binary_search1(arr: List[int], target: int) -> int:
#arr = [3, 8, 12, 17, 23, 28, 31, 36, 42, 47, 53, 57, 62, 68, 72, 78, 81, 87, 91, 96]
"""
	1.	23 (Элемент есть в массиве)
	2.	57 (Элемент есть в массиве)
	3.	100 (Элемента нет в массиве)
	4.	17 (Элемент есть в массиве)
	5.	50 (Элемента нет в массиве)
	6.	36 (Элемент есть в массиве)
	7.	1 (Элемента нет в массиве)
	8.	81 (Элемент есть в массиве)
	9.	96 (Элемент есть в массиве)
	10.	70 (Элемента нет в массиве)
"""

	left = 0
	right = len(arr) - 1
	
	while left <= right:
		mid = (right + left) // 2
		if arr[mid] == target:
			return mid

		elif arr[mid] > target:
			right = mid - 1
		else: left = mid + 1
	return left

def binary_search2(arr: List[int], target: int) -> int:
#arr = [2, 5, 8, 12, 16, 23, 38, 45, 56, 72]
"""
1.	8 (Элемент есть в массиве)
	2.	16 (Элемент есть в массиве)
	3.	45 (Элемент есть в массиве)
	4.	23 (Элемент есть в массиве)
	5.	100 (Элемента нет в массиве)
	6.	1 (Элемента нет в массиве)
"""

	left = 0
	right = len(arr) - 1
	
	while left <= right:
		mid = (right + left) // 2
		if arr[mid] == target:
			return target

		elif arr[mid] > target:
			right = mid - 1
		else: left = mid + 1
	return -1