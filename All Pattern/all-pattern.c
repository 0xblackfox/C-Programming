#include<stdio.h>


/*
-----------------------
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
-------------------
*/


/*
int main(){
    int n,row,col;
    printf("Enter any input: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
        printf("\n");
    }
}
*/


/*
-----------------------------
A B C D E 
A B C D 
A B C 
A B 
A 
------------------------
*/

/*
int main(){
    int n,row,col;
    printf("Enter any input: ");
    scanf("%d",&n);
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%c ",col+64);
        }
        printf("\n");
    }
}
*/



/*
-----------------
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
---------------------
*/

/*
int main(){
    int n,row,col;
    printf("Enter any input: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }


}
*/


/*
-----------------------
    1
   12
  123
 1234
12345
-------------------------
*/

/*
int main(){
    int n,row,col;
    printf("Enter any input: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
    printf("\n");
    }

}
*/


/*
------------------
12345
 1234
  123
   12
    1
-------------------- 
*/

/*
int main(){
    int n,row,col;
    printf("Enter any input: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
    printf("\n");
    }

}*/


/*
---------------------------
    1
   12
  123
 1234
12345
 1234
  123
   12
    1
-------------------------
*/

/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++)
            printf(" ");

        for(col=1;col<=row;col++)
            printf("%d",col);

        printf("\n");
    }

    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++)
            printf(" ");

        for(col=1;col<=row;col++)
            printf("%d",col);

        printf("\n");
    }

}*/


/*
---------------
*****
*****
*****
*****
*****
----------------
*/


/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            printf("*");
        }
         printf("\n");
    }

}*/


/*
-----------------------
1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25 
-----------------------
*/


/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",col*row);
        }
         printf("\n");
    }

}*/

/*
-------------------------------
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
------------------------------------

*/

/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf("  ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("* ");
        }
         printf("\n");
    }

}*/

/*
-------------------------------
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

------------------------------
*/

/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf("  ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("* ");
        }
         printf("\n");
    }

}*/



/*
-----------------------------------
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
------------------------------
*/

/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf("  ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("* ");
        }
         printf("\n");
    }
        for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf("  ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("* ");
        }
         printf("\n");
    }

}*/


/*
---------------------------------
     * 
    * * 
  * * * 
 * * * * 
* * * * * 
-----------------------------------
*/

/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("* ");
        }
         printf("\n");
    }

}*/


/*
---------------------------
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
--------------------------

*/

/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("* ");
        }
         printf("\n");
    }

}*/


/*
---------------------------
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
---------------------------

*/
/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("* ");
        }
         printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("* ");
        }
         printf("\n");
    }

}*/


/*
-----------------------------------
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
-------------------------------------

*/

/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(row==1 || row==n || col==1 || col==n)
                printf("* ");
            else
                printf("  ");
        }
         printf("\n");
    }

}
*/


/*
-------------------------
*         
* *       
*   *     
*     *   
* * * * * 
----------------------------
*/

/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(row==col || row==n || col==1)
                printf("* ");
            else
                printf("  ");
        }
         printf("\n");
    }

}*/


/*
--------------------------------
*       * 
  *   *   
    *     
  *   *   
*       * 
------------------------------

*/
/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(row==col || row+col==n+1)
                printf("* ");
            else
                printf("  ");
        }
         printf("\n");
    }

}*/



// Floyd's triangle

/*
-------------------------------
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
-----------------------------
*/

/*int main(){
    int count=0;
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
                printf("%d ",++count);

    }
     printf("\n");
}
    }
*/



/*
-----------------------------
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
-------------------------------
*/

/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf("  ");}
        for(col=1;col<=row;col++){
            printf("%d ",col);}
        for(col=row-1;col>=1;col--){
            printf("%d ",col);}

        printf("\n");

    }

}*/



/*
-------------------------------
1 2 3 4 5 4 3 2 1 
  1 2 3 4 3 2 1 
    1 2 3 2 1 
      1 2 1 
        1 
------------------------------
*/


/*int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf("  ");}
        for(col=1;col<=row;col++){
            printf("%d ",col);}
        for(col=row-1;col>=1;col--){
            printf("%d ",col);}

        printf("\n");

    }

}*/



/*
--------------------------
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
  1 2 3 4 3 2 1 
    1 2 3 2 1 
      1 2 1 
        1 

------------------------------

*/

int main(){
    int n,row,col;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf("  ");}
        for(col=1;col<=row;col++){
            printf("%d ",col);}
        for(col=row-1;col>=1;col--){
            printf("%d ",col);}

        printf("\n");

    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf("  ");}
        for(col=1;col<=row;col++){
            printf("%d ",col);}
        for(col=row-1;col>=1;col--){
            printf("%d ",col);}

        printf("\n");

    }

}
















