//
//  main.c
//  Pythagorean
//
//  Created by choihyunill on 2016. 3. 25..
//  Copyright © 2016년 choihyunill. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a,b,c=0;
    printf("a, b, c \n");
    for(a=1;a<50;a++)
    {
        for (b=1; b<50; b++)
        {
            for (c=1; c<50; c++)
            {
                if ((a*a)+(b*b)==(c*c))
                {
                printf("%2d %2d %2d\n",a,b,c);
                }
            }
        }
    }
    return 0;
}
