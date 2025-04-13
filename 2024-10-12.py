def func(value):
    if type(value) == type(100):          # 정수 int인지 확인
        return 100
    elif type(value) == type(""):         # 문자열 str인지 확인
        return len(value)
    else:
        return 20

a = "100.0"           # 문자열
b = 100.0             # 실수 float
c = (100, 200)        # 튜플

print(func(a) + func(b) + func(c))