# 백준 2798번 블랙잭

# 카드 갯수, 블랙잭 점수
n, max_score = map(int, input().split())
# n장의 카드
card_list = list(map(int, input().split()))

# 블랙잭 승리 경우
win_list = []

# 블랙잭 최고점수 (브루트포스 알고리즘)
for i in range(0, n-2):
  for z in range(i+1, n-1):
    for x in range(z+1,n):
      if(card_list[i] + card_list[z] + card_list[x] <= max_score):
        win_list.append(card_list[i] + card_list[z] + card_list[x])
      else:
        pass

print(max(win_list))
