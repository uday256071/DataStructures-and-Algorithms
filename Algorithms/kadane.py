#  used to find max sub-array sum  

# Q-->Given an array arr of N integers. Find the contiguous sub-array with maximum sum

#code

def maxSubarraySum(a):
    n=len(a)
    max_so_far =a[0] 
    curr_max = a[0] 
      
    for i in range(1,n): 
        curr_max = max(a[i], curr_max + a[i]) 
        max_so_far = max(max_so_far,curr_max) 
          
    return max_so_far 
    



lst=list(map(int,input("Enter a list: ").split()))

total=maxSubarraySum(lst)

print("Max Subarray Sum: ",total)

