#include <stdio.h>

int main(){
    int q, r1, r2, r3, r4, r5;
    int n1, n2, n3, n4, n5;
    scanf("%d", &q);
    if(q>=100000 && q<=999999){
        r1=q%10;
        n1=q/10;
        r2=n1%10;
        n2=n1/10;
        r3=n2%10;
        n3=n2/10;
        r4=n3%10;
        n4=n3/10;
        r5=n4%10;
        n5=n4/10;
        printf("%d%d%d%d%d%d", r1, r2, r3, r4, r5, n5);
    }else if (q>=10000 && q<=99999)
    {
        r1=q%10;
        n1=q/10;
        r2=n1%10;
        n2=n1/10;
        r3=n2%10;
        n3=n2/10;
        r4=n3%10;
        n4=n3/10;
        r5=n4%10;
        printf("%d%d%d%d%d", r1, r2, r3, r4, r5);
    }else if (q>=1000 && q<=9999)
    {
        r1=q%10;
        n1=q/10;
        r2=n1%10;
        n2=n1/10;
        r3=n2%10;
        n3=n2/10;
        r4=n3%10;
        printf("%d%d%d%d", r1, r2, r3, r4);
    }else if (q>=100 && q<=999)
    {
        r1=q%10;
        n1=q/10;
        r2=n1%10;
        n2=n1/10;
        r3=n2%10;
        printf("%d%d%d", r1, r2, r3);
    }else if (q>=10 && q<=99)
    {
        r1=q%10;
        n1=q/10;
        r2=n1%10;
        printf("%d%d", r1, r2);
    }else{
        printf("%d", q);
    } 
    return 0;
}