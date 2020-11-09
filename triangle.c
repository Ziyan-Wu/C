//
// Created by Julia on 20/11/07.
//

#include <stdio.h>
#include <math.h>

int main() {

    int lower,upper;
    double c;
    scanf("%d %d",&lower, &upper);

    if (lower <= upper && upper <= 100){
        printf("fahr celsius\n");
        while (lower <= upper){
            c =5.0*(lower-32)/9;
            printf("%d%6.1lf\n",lower,c); lower += 2;}}
    else
        {printf("Invalid.");}
    return 0;
}
