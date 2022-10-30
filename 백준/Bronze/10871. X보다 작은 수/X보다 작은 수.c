# include <stdio.h>

int main(){

  int test_num;
  scanf("%d", &test_num);

  int test;
  scanf("%d", &test);

  // 수열 입력
  int num[test_num];
  for(int i = 0; i < test_num; i ++){
    scanf("%d", &num[i]);
  }

  for(int i = 0; i < test_num; i ++){
    if(num[i] < test){
      printf("%d ",num[i]);
    }
  }
}