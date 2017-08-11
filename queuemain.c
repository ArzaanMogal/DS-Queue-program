#include<stdio.h>
#include "queueheader.h"
main()
{


    QUEUE q;
    init(&q);
    int val,pos;
    int choice;
    while (choice!=4)
    {
        printf("\n------MENUE------");
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.PEAK\n5.CHANGE\n6.EXIT\n ");
        printf("ENTER your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the value to be insert: ");
		         scanf("%d",&val);
		         insert(&q,val);
		         break;
            case 2: delete(&q);
		          break;
            case 3: display(&q);
		            break;
            case 4: PEAK(&q,&val);
                     break;
            case 5: printf("enter value:");
                    scanf("%d",&val);
                    printf("Enter position:");
                    scanf("%d",&pos);

                change(&q,pos,val);
                    break;
            case 6: exit(0);
	         default: printf("\nWrong selection!!! Try again!!!");

        }
    }
}
