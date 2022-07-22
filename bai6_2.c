#include <stdio.h>
#include <string.h>
/*
testcase: "          H          :  i            "
expected: "H : i"
*/
int main()
{
    char s[100]={0};
    fgets(s,100,stdin);
    
    int i,lens,j;

    lens = strlen(s);

    //xu ly dau dong
    for (i = 0; i < lens; i++)
    {
        if((s[i]!=32)&&(s[i]!=0))
        {
            j=i;
            break;
        }
    }
    for (i=0; i<lens;i++)
    {
        s[i] = s[i+j];
        s[i+j] = 0;
    }
    printf("%d\n",strlen(s));
    
    //xu ly cuoi cau
    for (i = lens-1; i >= 0; i--)
    {
        if((s[i]!=32)&&(s[i]!=10))
        {
            j=i;
            break;
        }
        else
        {
            s[i]=0;
        }
    }
    lens = j;

    //xu ly trong cau
    // for(i=0;i<lens;i++)
    // {
    //     if((s[i]==32)&&(s[i+1]=32))
    //     {
    //         for(j = i+1; j < lens; j++) 
    //         {
	// 			s[j] = s[j + 1];
	// 		}
	// 		i--;
	// 		lens--;
    //     }
    // }

    for (i=0;i<strlen(s);i++)
    {
        printf("%d ",(int)(s[i]));
    }
    return 0;
}