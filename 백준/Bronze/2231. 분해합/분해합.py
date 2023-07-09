# 백준 2231 분해합

# 분해합 입력받음
n = int(input(""))

# 생성자 변수
answer = 0

# 생성자 판별 조건연산
for i in range(n-1, 1, -1):

  # 임의 생성자
  m = i
  i_sag = []
  for z in str(i):
    i_sag.append(z)
  for x in range(len(i_sag)):
    m += int(i_sag[x])

  if(n == m):
    answer = i

print(answer)