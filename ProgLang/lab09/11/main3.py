def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper

f = toint(max)
print(f("2", "10", "3"))
