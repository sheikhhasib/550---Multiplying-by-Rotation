#include <stdio.h>

int main() {
    int main, h,a;
    while(scanf("%d %d %d",&main,&h,&a)==3){
        int cnt = 1;
        int s = h*a;
        while(s != h){
            s = s%main *a + s/main;
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
