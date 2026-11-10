### Задача 1 – Простые числа
```python
def is_prime(x):
    for d in range(2, int(x ** 0.5) + 1):
        if x % d == 0:
            return False
    return True

n = int(input())
count = 0
num = 1

while count < n:
    num += 1
    if is_prime(num):
        count += 1

print(num)
```
