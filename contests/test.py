import sys
input = sys.stdin.readline

n = int(input()) 
arr = [int(v) for v in input().strip().split(" ")] 
distinct = set(arr) 
print(len(distinct)) 
