def every_other(seq):
    it = iter(seq)
    x = next(it, None)
    while x!=None:
        yield x
        x = next(it, None)
        x = next(it, None)

print(*every_other([10, 20, 30, 40, 50]))
print(*every_other(range(10)))
print(*every_other(iter(range(10))))
print(sum(every_other(map(int, input().split()))))
