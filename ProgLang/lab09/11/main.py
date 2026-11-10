def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper

def add(a, b):
    return a + b

f1 = toint(add)
print(f1("10", "20"))

def mult(a, b):
    return a * b

f2 = toint(mult)
print(f2("3", "4"))

f3 = toint(max)
print(f3("2", "10", "3"))
