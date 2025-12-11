from typing import List
def minimumAbsDiff(self,arr:List[int]) -> List[List[int]]:
    arr.sort()
    m=float('int')
    output=[]

    for i in range(1, len(arr)):
        prev=arr[i-1]
        curr= abs(prev-arr[i])
        if(curr<m):
            output=[[prev,arr[i]]]
            m=curr
        elif m==curr:
            output.append[prev,arr[i]]
            return output
