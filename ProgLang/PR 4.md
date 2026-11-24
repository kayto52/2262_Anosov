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

### Задача 4 – Качество пароля
```python
r1 = "1234567890"
r2 = "qwertyuiop"
r3 = "asdfghjkl"
r4 = "zxcvbnm"

n = int(input())

for i in range(n):
    s = input()
    f1 = False
    f2 = False
    f3 = False
    f4 = False
    for ch in s:
        if ch in r1:
            f1 = True
        if ch in r2:
            f2 = True
        if ch in r3:
            f3 = True
        if ch in r4:
            f4 = True
    if f1 and f2 and f3 and f4:
        print("strong")
    else:
        print("weak")
```

### Задача 5 – Игра в Дурака
```python
ranks = ["6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"]

trump = input()
n = int(input())

ans = []

for i in range(n):
    v1, s1 = input().split()
    v2, s2 = input().split()

    p1 = ranks.index(v1)
    p2 = ranks.index(v2)

    if s1 == s2 and p2 > p1:
        ans.append(1)
    elif s2 == trump and s1 != trump:
        ans.append(1)
    else:
        ans.append(0)

print(*ans)
```
