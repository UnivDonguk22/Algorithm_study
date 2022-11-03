# include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    // 2 ~ 7 - 8 ~ 19 -> 
    // 6 -> 12 -> 18 -> 24
    // while로 더해가며 일치하는 영역에 들어섰을 때의 범위
    int count = 1;
    int test = 7;

    if(num != 1){ 
    while(num > test){
      ++count;
      test = test + 6*count;
    }

    ++count;
    }
    
  
  printf("%d", count);

    
    return 0;
}