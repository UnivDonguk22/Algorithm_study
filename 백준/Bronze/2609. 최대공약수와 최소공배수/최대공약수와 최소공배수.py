# 최소공약수와 최소공배수

# 두 자연수 입력
num_1, num_2 = map(int, input().split())

# 공약수 리스트
num_1_C = []
num_2_C = []
num_C = []

# 최대 공약수
# 공약수 리스트 채우기
for i in range(1, num_1 + 1):
  if(num_1 % i == 0):
    num_1_C.append(i)

for i in range(1, num_2 + 1):
  if(num_2 % i == 0):
    num_2_C.append(i)

# 최대 공약수 판별
for i in range(len(num_1_C)):
  for z in range(len(num_2_C)):
    if(num_1_C[i] == num_2_C[z]):
      num_C.append(num_1_C[i])

print(max(num_C))



# 최소 공배수

# 배수 변수 초기화
multiple = 1
while True:
  if((num_1 * multiple) % num_2 == 0):
    break
  multiple += 1
  
print(num_1 * multiple)