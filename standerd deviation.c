#include<stdio.h>

#include<math.h>

double compare(int x)

{
    double  sum  = 0;

    int i ;

    double ara[x];



    for( i = 0; i < x; i++){

        scanf("%lf",&ara[i]);

        sum = sum + ara[i];
    }



    double mean = sum / x;

    double arr[x];

    sum = 0;

    for( i = 0; i < x; i++){

        arr[i] = pow((ara[i] - mean), 2);

        sum = sum + arr[i];
    }

    double r = sum / x ;

    double t = sqrt(r);



    return t;

}

int main()

{
    int  j;

    int m, n;



    printf("number of player:");

    scanf("%d",&n);

    printf("number of innings they played:");

    scanf("%d",&m);

    double arra[n];

    for( j = 0; j < n; j++){

        printf("score for player number%d:", j+1);

        arra[j] = compare(m);

    }

    double min = arra[0] ;

    int p;

    for(int i = 1; i < n; i++){

        if(arra[i] < min)

            p = i;


    }

    printf("player number :%d is best!\n");

    return 0;

}
