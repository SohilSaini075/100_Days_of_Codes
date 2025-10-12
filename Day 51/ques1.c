/*Q1: Print HelloWorld
Link: https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    
    fgets(s, sizeof(s), stdin);
    
    printf("Hello, World!\n");
    printf("%s", s);
    
    return 0;
}


