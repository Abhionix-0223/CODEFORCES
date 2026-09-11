t=int(input())
def prefix_min(val,arr):
    for i in range(len(arr)):
        if min(arr[0:i+1])<val:
            return False
        if val==min(arr[0:i+1]):
            return True
    return False

def suffix_max(val,arr):
    for i in range(1,len(arr)+1):
        if max(arr[-1:-(i+1):-1])>val:
            return False
        if val==max(arr[-1:-(i+1):-1]):
            return True
    return False


for _ in range(t):
    res=""
    n=int(input())
    arr=input().split()
    for i in arr:
        if i!=max(arr) or i!=min(arr):
            if prefix_min(i,arr):
                res+="1"
                continue
            if suffix_max(i,arr):
                res+="1"
                continue
            res+="0"
        else:
            res+="1"
    print(res)

