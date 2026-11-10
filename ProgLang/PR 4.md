### Задача 1 – Простые числа
```python
def prime(x):
    for d in range(2, int(x ** 0.5) + 1):
        if x % d == 0:
            return False
    return True

n = int(input())
count = 0
num = 1

while count < n:
    num += 1
    if prime(num):
        count += 1

print(num)
```

### Задача 2 – Мама Дяди Федора
```python
n = int(input())
days = list(map(int, input().split()))

ans = n
seen = []

for i in range(n):
    if days[i] not in seen:
        seen.append(days[i])
    if len(seen) == 3:
        ans = i + 1
        break

print(ans)
```

### Задача 3 – Удаление буквы
```python
s = input()

best = ""
m = 0

for ch in set(s):
    cnt = s.count(ch)
    if cnt > m:
        m = cnt
        best = ch

print(s.replace(best, ""))
```
