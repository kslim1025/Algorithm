//
//  main.c
//  triangle
//
//  Created by choihyunill on 2016. 3. 26..
//  Copyright © 2016년 choihyunill. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int line, space,star;
    
    printf("삼각형의 높이");
    scanf("%d",&n);
    for(line=0;line<n;line++)
    {
        for (space=0; space<(n-line); space++)
        {
            putchar(' ');
        }
        for (star=0; star<(2*line+1); star++)
        {
            putchar('*');
        }
        return 0;
    }
}
