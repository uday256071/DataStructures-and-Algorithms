Algorithms Learnt:

1. Kadane's Algo -> used for finding Max subarray sum. 
    Time - O(n), Space-O(1)
    Keep max sub-array sumof the previous element in a varaible, 
    So, for current element maxSubarraySum = max( prevElementSubarraySum + currElenent , currElement)

    Eg - Cpp/DSA-gfg/arrays/maxSubarraySum.cpp