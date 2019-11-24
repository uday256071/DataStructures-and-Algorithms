"""find all unique pairs in the array whose sum is k"""

def unqPairSum(arr,k):
    if len(arr)<2:
        return
    pairs=set()
    pair=[]

    for i in arr:
        target=k-i
        
        if i!=target:
            if target in arr:
                pair=(min(i,target),max(i,target))
        else:
            if arr.count(i)>1:
                pair=[i,i]

        pairs.add(pair)
    #print('\n'.join(map(str,list(pairs))))    -- nice trick
    return pairs

if __name__=="__main__":
    arr=[4,5,6,1,3,6,9,2,3,8,3,6,78,8]
    sum=10
    print(unqPairSum(arr,sum))



