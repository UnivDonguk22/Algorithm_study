# 백준 해싱

# print(ord("a") - 96)
# 아스키코드로 문제 해결

l = int(input()) # 문자열 길이 입력
char_list = input() # 문자열 입력

# 해시 값 초기화
answer_hashing = 0

# 해시함수 실행
for i in range(l):
  answer_hashing += (ord(char_list[i]) - 96 ) * 31**i
  
answer_hashing = answer_hashing % 1234567891

print(answer_hashing)

