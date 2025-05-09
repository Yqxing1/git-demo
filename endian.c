#include <stdio.h>

void hotn(float F, char *buf)
{
    char *ptr = (char *)&F;
    for(int i=0; i<4; i++)
    {
        buf[i] = *(ptr + (3-i));
        printf("buf[%d]: %x\n",i, buf[i]);
    }
    
}

int main()
{
    float f = 0.5f;//3f000000;
    char  buf[4]= {0};
    hotn(f, buf);
    return 0;
}