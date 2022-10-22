# include <stdio.h>

int main(){
    int cal_num;
    
    scanf("%d", &cal_num);
    
    // 입력받은 테스트 수만큼 배열 선언
    char num[cal_num];
    int total_num = 0;

    // 테스트 정수들을 문자열로 받음.
    scanf("%s", num);

    // 문자열로 받아진 테스트 정수를 정수로 변환 후 total에 저장
    // 받아진 문자를 정수로 변환하기 위해선, 아스키코드 값에서 -48을 해줘 변환한다.
    for(int i = 0; i < cal_num; i ++){
        total_num = total_num + ((int)num[i] - 48);
    }
    
    printf("%d", total_num);
}