# 백준 1978 소수찾기


answer_num = 0 # 소수 갯수 변수초기화
n = int(input("")) # 조사할 수 갯수입력

# 조사할 수들 입력
n_list = list(map(int, input().split()))


# 소수 조사시작
for i in range(0,n):
    if(n_list[i] != 1 and n_list[i] != 2 and n_list[i] != 3):
        for z in range(2, n_list[i]):
            if(n_list[i] % z == 0):
                break
            elif(z == n_list[i] - 1):
                answer_num += 1
                
    elif(n_list[i] == 2 or n_list[i] == 3):
        answer_num += 1

print(answer_num)