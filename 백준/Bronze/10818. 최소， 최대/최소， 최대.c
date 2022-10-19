# include <stdio.h>

int main(){
    int test_num;
    scanf("%d", &test_num);
    
    int num[test_num];
    
    for(int i = 0; i < test_num; i ++){
        scanf("%d", &num[i]);
    }

    int save;
    // 최솟값 뽑기
    for(int i = test_num - 1; i > 0; i --){
        if(num[i] < num[i-1]){
          save = num[i-1];
          num[i-1] = num[i];
          num[i] = save;
        }
    }
  printf("%d ", num[0]);
  
      // 최댓값 뽑기
    for(int i = 0; i < test_num -1; i++){
        if (num[i] > num[i+1]){
          save = num[i];
          num[i] = num[i+1];
          num[i+1] = save;
        }
    }
  printf("%d", num[test_num -1]);
  

    return 0;

    
}