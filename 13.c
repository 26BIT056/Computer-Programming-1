#include<stdio.h>
int main()
{
    float bytes,kb,mb,gb;
    printf("enter bytes=");
    scanf("%f",&bytes);
    kb=bytes/1024;
    mb=kb/1024;
    gb=mb/1024;
    printf("\n%f bytes=%f kb\n",bytes,kb);
    printf("\n%f bytes=%f mb\n",bytes,mb);
    printf("\n%f bytes=%f gb\n",bytes,gb);
    return 0;
}
