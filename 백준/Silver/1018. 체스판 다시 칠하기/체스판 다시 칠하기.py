
# N X M 보드 입력받음
n, m = map(int,input().split(" "))


arr = []
for _ in range(n):
    arr.append(list(map(str, input())))


# test
# for _ in range(n):
#     print("%d"%(_+1) + "행", end=' =')
#     for i in range(m):
#         print(arr[_][i], end='')

#     print()


# 최소 덧칠 갯수 기록변수
best_update = -1

# N X M 보드 전체검사
for N in range(n-7):
    for M in range(m-7):

        white_first = 0
        black_first = 0
        example_update = 0
        
        # 임의의 8 X 8 보드 검사
        for row in range(N, N+8, +1):
            for col in range(M, M+8, +1):
                
                # 흰 먼저 상태, 검사
                # if((row + 1) % 2 != 0 & (col + 1 % 2) != 0):
                #     if (arr[row][col] != "W"):
                #         white_first += 1

                # else:
                #     if(arr[row][col] != "B"):
                #         white_first += 1
                if((row + 1) % 2 != 0):
                    if((col + 1) % 2 != 0):
                        if(arr[row][col] != "W"):
                            white_first += 1
                    else:
                        if(arr[row][col] != "B"):
                            white_first += 1
                else:
                    if((col + 1) % 2 != 0):
                        if(arr[row][col] != "B"):
                            white_first += 1
                    else:
                        if(arr[row][col] != "W"):
                            white_first += 1

            
                # 검 먼저 상태, 검사
                # if((row + 1) % 2 != 0 & (col + 1 % 2) != 0):
                #     if (arr[row][col] != "B"):
                #         black_first += 1

                # else:
                #     if(arr[row][col] != "W"):
                #         black_first += 1
                if((row + 1) % 2 != 0):
                    if((col + 1) % 2 != 0):
                        if(arr[row][col] != "B"):
                            black_first += 1
                    else:
                        if(arr[row][col] != "W"):
                            black_first += 1
                else:
                    if((col + 1) % 2 != 0):
                        if(arr[row][col] != "W"):
                            black_first += 1
                    else:
                        if(arr[row][col] != "B"):
                            black_first += 1

        # 임의의 보드 검사 완료
        if (white_first > black_first):
            example_update = black_first
        else:
            example_update = white_first
                
        # 임의의 보드 최소갯수와 기록된 최소 갯수 비교
        if (best_update == -1 or best_update > example_update):
            best_update = example_update
        
        # print(best_update, end =", ")

print(best_update)