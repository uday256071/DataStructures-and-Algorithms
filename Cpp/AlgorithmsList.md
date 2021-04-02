Algorithms Learnt:

1. Kadane's Algo -> used for finding Max subarray sum. 
    Time - O(n), Space-O(1)
    Keep max sub-array sumof the previous element in a varaible, 
    So, for current element maxSubarraySum = max( prevElementSubarraySum + currElenent , currElement)
    Eg - Cpp/DSA-gfg/arrays/maxSubarraySum.cpp 
    


2. Boyer Moore's voting algorithm -> used for finding majority element (can also be used to find the second majority ele)
    Time - O(n), Space - O(1)
    Eg - Cpp/DSA-gfg/arrays/majorityElement.cpp
    https://ide.geeksforgeeks.org/AAU0PbQvy4

3. Sliding window technique - we take two variables and slide them through. Used to find max sum of K consecutive element
    Time - O(n), Space- O(1)
    Eg - Cpp/DSA-gfg/arrays/maxSumOfK-consectiveEle.cpp
    https://ide.geeksforgeeks.org/QSMe98qHhN
