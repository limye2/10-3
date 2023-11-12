//
//  main.c
//  10-3
//
//  Created by MacBook Air on 2023/11/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char src[] = "THe worst things to eat before you sleep";
    char dst[100];
    
    strcpy(dst, src);
    
    printf("copied string : %s\n", dst);
    return 0;
}
