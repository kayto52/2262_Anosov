def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper

def add(a, b):
    return a + b

f = toint(add)
print(f("10", "20"))
