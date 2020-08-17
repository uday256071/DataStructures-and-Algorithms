"""This problem was asked by Snapchat.
Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), 
find the minimum number of rooms required.
For example, given [(30, 75), (0, 50), (60, 150)], you should return 2"""


def minHalls(lectures):
    arr = [0] * 10000
    reqHalls, temp = 0, 0

    for l in lectures:
        arr[l[0]] += 1
        arr[l[1]] -= 1

    for i in arr:
        temp += i
        reqHalls = max(temp, reqHalls)
    return reqHalls


if __name__ == "__main__":
    lectures = [(30, 75), (0, 50), (60, 150), (40, 180)]
    # lectures=[]

    print("Required No of rooms:", minHalls(lectures))

