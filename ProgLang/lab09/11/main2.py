def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper

def mult(a, b):
    return a * b

f = toint(mult)
print(f("3", "4"))
