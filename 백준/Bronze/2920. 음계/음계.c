#include <stdio.h>


int main(){
    // 입력받을 데이터 배열로 저장
    int arr[8];

    // 배열 데이터 입력
    for(int i = 1; i <= 8 ; i ++){
        scanf("%d" , &arr[i-1]);
    }

    // 음계 분석
    if(arr[0] == 1){
        for(int j = 0; j <= 6; j ++){
            if(arr[j] + 1 != arr[j+1]){
                printf("mixed");
                return 0;
            }
        }
        printf("ascending");
    }
    else if (arr[0] == 8){
        for(int j = 0; j <= 6; j ++){
            if(arr[j] - 1 != arr[j+1]){
                printf("mixed");
                return 0;
            }
        }
        printf("descending");
    }
    else{
        printf("mixed");
    }

    return 0;
    }
