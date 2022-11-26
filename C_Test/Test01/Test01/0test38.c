#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//}

void Test(void)
{
    char* str = (char*)malloc(100);
    if (str == NULL) {
        return;
    }

    strcpy(str, "hello");
    free(str);
    //str «“∞÷∏’Î

    str = NULL;

    if (str != NULL)
    {
        strcpy(str, "world");
        printf(str);
    }
}

//int main() {
//    Test();
//    return 0;
//
//}