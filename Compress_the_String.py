from itertools import groupby

s=input().strip()
for key,group in groupby(s):
    count=len(list(group))
    print(f"({count}, {key})",end=" ")