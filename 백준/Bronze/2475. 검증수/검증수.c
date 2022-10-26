# include <stdio.h>

int main(){
    int num[5];
    
    // 고유번호 5자리 입력받음
    for(int i = 0 ; i < 5; i ++){
        scanf("%d", &num[i]);
    }
    
    // 고유번호 각 자릿수 제곱의 합
    int total = 0;
    for(int i = 0; i < 5; i ++){
        total = total + (num[i]*num[i]);
    }
    
    // 검증수 출력
    printf("%d", (total % 10));
    
    return 0;
}