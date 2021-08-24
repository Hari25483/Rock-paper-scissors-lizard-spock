#include <stdio.h>
   int main()
   {
       char user1,user2;
       printf("Enter the input from user1, and 2\n");
       scanf("%c %c",&user1, &user2);
       if(((user1=='R')||(user1=='S')||(user1=='L')||(user1=='P')||(user1=='C')) && ((user2=='R')||(user2=='S')||(user2=='L')||(user2=='P')||(user2=='C'))){
           if (user1==user2){
            printf("Tie");
           }
           else if (user1=='R'){
            if ((user2=='S')||(user2=='P')){
                printf("User2 wins");
            }
            else if ((user2=='L')||(user2=='C')){
                printf("User1 wins");
           }
            }
          else if (user1=='S'){
            if ((user2=='R')||(user2=='C')){
                printf("User1 wins");
            }
            else if ((user2=='L')||(user2=='P')){
                printf("User2 wins");
            }
          }
          else if (user1=='C'){
            if ((user2=='S')||(user2=='R')){
                printf("User2 wins");
            }
            else if ((user2=='L')||(user2=='P')){
                printf("User1 wins");
            }
          }
          else if (user1=='L'){
            if ((user2=='S')||(user2=='P')){
                printf("User1 wins");
            }
            else if ((user2=='C')||(user2=='R')){
                printf("User2 wins");
            }
          }
          else{
            if ((user2=='S')||(user2=='R')){
                printf("User1 wins");
            }
            else if ((user2=='C')||(user2=='L')){
                printf("User2 wins");
            }
        }
       }
       else{
        printf("Invalid input");
       }
      return 0;
   }
