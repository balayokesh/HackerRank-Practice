if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    

maximum = max(arr)
count = arr.count(maximum)

for i in range(count):
    arr.remove(maximum)
    
print(max(arr))
