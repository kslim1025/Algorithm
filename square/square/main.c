//
//  main.c
//  square
//
//  Created by choihyunill on 2016. 3. 26..
//  Copyright © 2016년 choihyunill. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n;
    int i,k;
    
    printf("출력 라인의 수");
    scanf("%d",&n);
    for(k=0;k<n; k++)
    {
        for(i=0;i<n;i++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
