maxSum = [1,-3,2,1,-1]

for i in maxSum:
    max = maxSum[i]
    for j in maxSum:
        current = maxSum[i] + maxSum[j+1]
        if current > max:
            max = current
            print(max)
  