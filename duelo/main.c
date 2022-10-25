#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1=0, a2=0, d1=0, d2=0, h1=0, h2=0, aPp=0, dPp=0, hPp=0, nCm=0, err=1;


    for(int i=0; i<err; i++){
        scanf("%d", &nCm);
        if(nCm<1 || nCm>20){
            err++;
        }
    }
    err=1;

    for(int i=0; i<err; i++){
        scanf("%d", &aPp);
        if(aPp<1 || aPp>1000){
            err++;
        }
    }
    err=1;

    for(int i=0; i<err; i++){
        scanf("%d", &dPp);
        if(dPp<1 || dPp>1000){
            err++;
        }
    }
    err=1;

    for(int i=0; i<err; i++){
        scanf("%d", &hPp);
        if(hPp<1 || hPp>1000){
            err++;
        }
    }
    err=1;

    for(int i=0; i<nCm; i++){

        for(int i=0; i<err; i++){
            scanf("%d", &a1);
            if(a1<1 || a1>1000){
                err++;
            }
        }

        for(int i=0; i<err; i++){
            scanf("%d", &d1);
            if(d1<1 || d1>1000){
                err++;
            }
        }

        for(int i=0; i<err; i++){
            scanf("%d", &h1);
            if(h1<1 || h1>1000){
                err++;
            }
        }
        err=1;

        a2 += a1;
        d2 += d1;
        h2 += h1;
    }

    if(a2>=aPp && d2>=dPp && h2>=hPp){
        printf("Y");
    } else{
        printf("N");
    }

    return 0;
}
