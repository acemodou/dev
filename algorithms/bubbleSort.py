""" objective
    sort the array in increasing order

1. Scan the array and compare  A[i] and A[i + 1]
2. If index is out of order we swap
3. Time complexity is O(n^2) since we are comparing everything
4. Space complexity is O(n) """


def swap(a, b):
    temp = a
    a = b
    b = temp


def bubbleSort(arr):
    for i in range(len(arr)):
        for j in range(0, len(arr) -i- 1):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] =temp


if __name__ == "__main__":
    arr = [2, 7, 4, 1, 5, 3]
    print(arr)
    bubbleSort(arr)
    print(arr)
