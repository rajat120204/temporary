def min_seconds_to_stop_disappearing(N, A, B):
    
    degrees = {}
    
   
    for i in range(N):
        degrees[i] = 0
    
   
    for i in range(len(A)):
        degrees[A[i]] += 1
        degrees[B[i]] += 1
    
    seconds = 0
    while True:
        
        disappearing_vertices = [v for v, degree in degrees.items() if degree <= 1]
        
       
        if not disappearing_vertices:
            break
        
        
        for v in disappearing_vertices:
            del degrees[v]
            for i in range(len(A)):
                if A[i] == v or B[i] == v:
                    degrees[A[i]] -= 1
                    degrees[B[i]] -= 1
        
        seconds += 1
    
    return seconds

# Example usage:
N = 5
A = [0, 1, 2, 3]
B = [1, 2, 3, 4]
result = min_seconds_to_stop_disappearing(N, A, B)
print(result)  # Output will be the number of seconds


# N=7
# A=[0,1,2,1,4,4]
# B=[1,2,0,4,5,6]
# ans=solution(N,A,B)
# print(ans)