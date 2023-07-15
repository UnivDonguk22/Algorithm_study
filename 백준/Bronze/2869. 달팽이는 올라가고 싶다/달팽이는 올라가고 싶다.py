# 달팽이 는 올라가고 싶다

A, B, V = map(int, input().split())

# day 변수 초기화
day = 0

if( (V - B) % (A - B) == 0):
  day = (V-B) // (A-B)
else:
  day = (V-B) // (A-B) + 1

print(day)