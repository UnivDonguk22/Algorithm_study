# include <stdio.h>

int main(){
  int arr_num[10];

  for( int i = 0; i < 10; i ++){
    scanf("%d", &arr_num[i]);
    scanf("%*c");
  }

  // 10개 자연수를 42로 나눈 나머지로 재구성
  for(int i = 0; i < 10; i ++){
    arr_num[i] = arr_num[i] % 42;
  }

  // 42로 나눈 나머지 분석 - 나머지 등장 빈도수 배열
  int mod_arr[42] = {0};
  for(int i = 0; i < 10; i ++){
    ++mod_arr[arr_num[i]];
  }

  // 나머지 등장 빈도수 배열에서 존재하는 값들 세기
  int count = 0;
  for(int i = 0; i < 42; i ++){
    if(mod_arr[i] != 0){
      ++count;
    }
  }
  
  printf("%d", count);
}