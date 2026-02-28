#include <stdio.h>
int main(){
    int a,b;
    int choice;
    int result;
    printf("Welcome to calculator!!!");
    do{

    
        printf("Choose your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d",&choice);
        if (choice == 5) {
            printf("Exiting calculator...\n");
            break;
        }
        printf("Enter two numbers:\n");
        scanf("%d %d",&a,&b);
        switch(choice){
            case 1:
                result=a+b;
                printf("The result is %d\n",result);
                break;
            
            case 2:
                result=a-b;
                printf("The result is %d\n",result);
                break;
            
            case 3:
                result=a*b;
                printf("The result is %d\n",result);
                break;
            
            case 4:
                if(b!=0) {
                    result = a/b;
                    printf("The result is %d\n", result);
                } else{
                    printf("Error: Division by zero!\n");
                }
                break;
            
            default:
                printf("Invalid choice! Please enter 1-5.\n");
            
            }
        
    }while(choice!=5);
    return 0;
}
