#include <stdio.h>
    int sum();
    int sub();
    
    int main()
    {
        int c;
        printf("your options are :\n ,1.add \n 2.sub\n");
        printf("select your options :");
        scanf("%d",&c);
        
        int a,b;
        printf("input  number 1st :");
        scanf("%d",&a);
        printf("input number 2nd:");
        scanf("%d",&b);
        
        switch(c)
        {
        case 1:
        sum (a,b);
        break;
        
        case 2:
        sub(a,b);
        break;
        
        default:
        printf("wromg choice");
    }
        

    return 0;
   
}
