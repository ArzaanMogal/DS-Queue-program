#define MAX 10
typedef struct
{
    int data[MAX];
    int f,r;

}QUEUE;
init(QUEUE *q)
    {
        q->f=-1;
        q->r=-1;
        printf("queue is initialize\n");
    }
insert(QUEUE *q,int val)
{
   if(q->r == MAX-1)
   {


      printf("\n Insertion is not possible!!!");
   }
   else{
      if(q->f == -1)
      {


	 q->f = 0;
      }
      q->r++;
      q->data[q->r] = val;
      printf("\nQUEUE has been INSERTED...");
   }
}
delete(QUEUE *q)
{
   if(q->f ==q->r)
      printf("\n Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", q->f);
      q->f++;
      if(q->f == q->r)
	 q->f =q->r = -1;
   }
}
display(QUEUE *q)
{
   if(q->f==-1 && q->r == -1)
      printf("\nQueue is Empty!!!");
   else{
      int i;

      for(i=q->f; i<=q->r; i++)
	 printf("\nQueue elements are:%d\t",q->data[i]);
   }
}
PEAK(QUEUE *q,int val)
{
    if(q->f==-1 && q->r == -1)
    {


      printf("\nQueue is Empty!!!");
   }
   else
   {
       val=q->data[q->f];
       return val;
   }

}
change(QUEUE *q,int pos,int val)
{
    int i;
    if(q->f==-1 && q->r==-1)
    {
        printf("QUEUE is empty...");

    }
    else
    {
        i=pos+q->f;
        if(i>=q->f &&  i<=q->r)
        {
            q->data[i]=val;
        }
        else
        {
            printf("INVALID POS...");
        }
   }
}
