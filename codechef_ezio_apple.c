#include <stdio.h>
int main()
{ int t ,i ,x,y;
scanf("%d",&t);
for ( i = 1; i <=t; i++)
{   
    scanf("%d%d",&x,&y);
  if (x<y)
  {
      printf("NO\n");
  }
  else if (x=y)
  {
      printf("YES\n");

  }
  else if (y>x)
  {
      printf("YES\n");
  }
  
  
  
}

    
    return 0;
}
