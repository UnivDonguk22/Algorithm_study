# 팰린드롬수


num = 1
while True:
  # 숫자 입력
  num = int(input())

  # 종료 조건연산
  if(num == 0):
    break
  
  num_str = str(num)
  num_palin = ""
  # 입력받은 수 팰린드롬수 재배열
  for i in range(len(num_str)-1, -1, -1):
    num_palin += num_str[i]

  # 팰린드롬수 조건연산
  if(num_palin == num_str):
    print("yes")
  else:
    print("no")
