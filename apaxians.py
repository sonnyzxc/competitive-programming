A = [char for char in input()]
print(''.join([A[i] for i in range(len(A)) if (i==0) or A[i] != A[i-1]]))