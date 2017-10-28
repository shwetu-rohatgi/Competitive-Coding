#include <math.h>
#include <stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int y,i,j,k,n,m,b[500],g[500];
    int x=0;
    int final=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        scanf("%d",&g[i]);
    
    for(i=0;i<n;i++){
        x=abs(b[i]-g[0]);
        for(j=0;j<m;j++){
            y = abs(b[i]-g[j]);
            if(y==0){
                x=0;
                break;
            }
            else if(y<x){
                x=y;
            }
            final = final + x;
        }
    }
    printf("%d",final);

    return 0;
}
