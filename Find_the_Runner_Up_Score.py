if __name__=="__main__":
    n=int(input())
    arr=map(int,input().split())
    arr1=sorted(set(arr),reverse=True)
    arr=list(arr1)
    print(arr[1])