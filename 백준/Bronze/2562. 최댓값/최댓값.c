# include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5,n6,n7,n8,n9;
    scanf("%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);
    
    // 제어문 시작
    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5 && n1> n6 && n1 > n7 && n1 > n8 && n1 > n9){
        printf("%d\n", n1);
        printf("1");
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5 && n2> n6 && n2 > n7 && n2 > n8 && n2 > n9){
        printf("%d\n", n2);
        printf("2");
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5 && n3> n6 && n3 > n7 && n3 > n8 && n3 > n9){
        printf("%d\n", n3);
        printf("3");
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5 && n4> n6 && n4 > n7 && n4 > n8 && n4 > n9){
        printf("%d\n", n4);
        printf("4");
    }
    else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4 && n5> n6 && n5 > n7 && n5 > n8 && n5 > n9){
        printf("%d\n", n5);
        printf("5");
    }
    else if (n6 > n1 && n6 > n2 && n6 > n3 && n6 > n5 && n6> n4 && n6 > n7 && n6 > n8 && n6 > n9){
        printf("%d\n", n6);
        printf("6");
    }
    else if (n7 > n1 && n7 > n2 && n7 > n3 && n7 > n5 && n7> n4 && n7 > n6 && n7 > n8 && n7 > n9){
        printf("%d\n", n7);
        printf("7");
    }
    else if (n8 > n1 && n8 > n2 && n8 > n3 && n8 > n5 && n8> n4 && n8 > n7 && n8 > n6 && n8 > n9){
        printf("%d\n", n8);
        printf("8");
    }
    else {
        printf("%d\n", n9);
        printf("9");
    }
    
}