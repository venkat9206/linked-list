#include<stdio.h>
#include<stdlib.h>

typedef struct node {
 int data;
 struct node *nxt;
} Node;


Node *nd, *head, *tail, *mp;
int d;
int s;
int pos;


  print_list(Node *n)
{
	if(n == NULL)
	{
		printf("no data in the list\n"); 
	}
	else{
		while(n!=NULL)
		{
		
	printf("%d\n", n -> data);
	n = n -> nxt;
}
}
}

Node * add_to_end(int dat)
{
	 if(tail == NULL)
	{
	
	nd = (Node *) malloc(sizeof (Node));
	if(nd == NULL)
	 {
		printf("node creation failed");
	 }
	nd -> data = d;
	nd -> nxt = NULL;
    tail = nd;
    head = nd;
	return tail;
	
   }
else 
 {
     nd = (Node *) malloc(sizeof (Node));
	if(nd == NULL)
	 {
		printf("node creation failed");
	 }
	nd -> data = d;
    nd -> nxt = NULL;
	tail -> nxt = nd;
	tail = nd;
	
	return tail;
 }
}


Node * add_to_list(int dat)
{
	 if(nd == NULL)
	{
	
	nd = (Node *) malloc(sizeof (Node));
	if(nd == NULL)
	 {
		printf("node creation failed");
	 }
	nd -> data = d;
	nd -> nxt = NULL;
	head = nd;
	tail = nd;
	return head;
	
   }
else 
 {
     nd = (Node *) malloc(sizeof (Node));
	if(nd == NULL)
	 {
		printf("node creation failed");
	 }
	nd -> data = d;
    nd -> nxt = NULL;
	nd -> nxt = head;
	head = nd;
	
	return head;
 }
}



Node * insertion(int dat, Node *n, int p)
{
	 int print;
	 if(nd == NULL)
	{
	nd = (Node *) malloc(sizeof (Node));
	if(nd == NULL)
	 {
		printf("node creation failed");
	 }
	nd -> data = d;
	nd -> nxt = NULL;
	head = nd;
	tail = nd;
	return head;
	
   }
else 
 {

     nd = (Node *) malloc(sizeof (Node));
	if(nd == NULL)
	 {
		printf("node creation failed");
	 } 
	nd -> data = d;
	int i = 2;
    
    
	while (i<p)
	{
		if (n -> nxt!= NULL)
		{
	    n = n ->nxt;
        } 
		else { 
		     print = 1;
		}
		i++;
     }
   if(print == 1)
      {
	  
            printf("Out of list range...inserting as tail");
       }
     
	nd -> nxt = n -> nxt;
	n-> nxt = nd;
	tail = nd;
	
 }
}

Node * Delete_from_list(Node *n)
{

        if(n == NULL)
        {
		
   	     printf("No element in the list\n");
     	}
   else
       {
       	mp = n;
       	n = n -> nxt;
       	free(mp);
        return n;
       
	   }
}

Node * Delete_from_pos(Node *n, int p)
{
 int i = 2;
        if(n == NULL)
        {
		
   	     printf("No element in the list\n");
     	}
   else
    {
       	
       	if (p == 1)
       	{
		
       	mp = n;
       	n = n -> nxt;
       	free(mp);
       	head = n;
       
        }
   
       else
        { 	
           while(i<p)
           {
            
           	   if (n -> nxt!= NULL)
				  {
				  n = n -> nxt;
			    }
			   i++;
		   }
           	  if (n -> nxt!= NULL)
           	  {
				
				nd = (Node *) malloc(sizeof (Node));
	                   if(nd == NULL)
	                   {
	                     	printf("node creation failed");
	                   } 
	               
				   nd = n;
				   n = n -> nxt;
				   if(n -> nxt != NULL)
			          {
			                
				   nd -> nxt = n -> nxt;
				   free(n);
		             	}
		             
               }
               else  {
			   printf ("delete position out of range");
                     }
       }
	}
}



   main()
{

	
	nd = NULL;
	head = NULL;
	tail = NULL;

while(1)
{
printf("\nEnter operation:\n 1. Print list\n 2. Add to list\n 3. Delete from list\n 4. add to end\n 5. Insertion\n 6. Delete from position");
scanf("%d", &s);



switch(s)
{
case 1: 
printf("\nPrinting list ......\n");
print_list(head);
break;

case 2: 
 printf("Enter data\n");
scanf("%d",&d);
 add_to_list(d);
break;

case 3: 
head = Delete_from_list(head);
break;

case 4: 
 printf("Enter data\n");
scanf("%d",&d);
 add_to_end(d);
break;

case 5: 
 printf("Enter data\n");
scanf("%d",&d);
	printf("Enter the position of the element");
    scanf("%d",&pos);
       if(pos == 1)
      {
	  
            printf("Use add to list instead...now Adding to 2nd position");
       }
 insertion(d, head, pos);
break;

case 6: 
	printf("Enter the position of the element");
    scanf("%d",&pos);
Delete_from_pos(head, pos);
break;

}
}
}


