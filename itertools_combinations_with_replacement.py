from itertools import combinations_with_replacement

if __name__=="__main__":
    s,k=input().split()
    k=int(k)
    sorted_s=sorted(s)
    
    result=combinations_with_replacement(sorted_s,k)
    for comb in result:
        print("".join(comb))