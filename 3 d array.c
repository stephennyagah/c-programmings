#include<stdio.h>
int main()
{
    int i, j, k,marks [3][3][3] = 
    {{
     {1, 2, 3}, {4, 5, 6}, {7, 8,9} },
        { {9, 8,10}, {7, 6,5}, {5, 4,6} },
        { {0, 3,2}, {5, 7,5}, {9, 2,6}
        }};
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++){
                printf("%d",marks,i,j,k);
                
            }}}
    return 0;
}