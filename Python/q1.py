'''This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17'''


# using hashMap edge case checked for k/2   - HASHMAP
def sumOfTwo(arr,k):    
    arrSet = set(arr)
    for x in arr:
        if x == k/2 :
            if arr.count(x) >= 2:
                return "pair found - "+str(x)+" "+str(x)
        else:
            if k-x in arrSet:
                return "pair found - "+str(x)+" "+str(k-x)

#use this approach if the array is sorted   - TWO POINTER APPROACH
def sumOfTwo1(arr,k):
    arr.sort()
    i,n = 0 ,max(len(arr)-1,0)
    while i != n:
        if arr[i]+arr[n]>k:
            n=n-1
        elif arr[i]+arr[n]<k:
            i=i+1
        else:
            return "pair found - "+str(arr[i])+" "+str(arr[n])


if __name__ == "__main__" :
    arr = [10,15,3,3,7]
    # arr =[]
    print(sumOfTwo(arr,22))
    print(sumOfTwo1(arr,22))


