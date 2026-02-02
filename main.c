//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "std_node.h"

int main(int argc, const char * argv[]) {

   NodePtr temp,head;

    printf("Create nodes by malloc\n");
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
        
        head=  (NodePtr) malloc(sizeof(Node));
        temp=head;
        
        n=(argc-1)/2;
        for(i=0;i<n;i++){
            temp->value =7+i*2;
            temp ->next=  (NodePtr) malloc( sizeof(Node));
            temp=temp->next;
        }
        temp->value =7+i*2;
        temp ->next= NULL;

       temp=head;
         while(temp){  //temp!=NULL
            printf("%3d", temp->value);
            temp=temp->next;
           // What is missing???
        }
    printf("\n");

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
     temp=head;
     while(temp){
          head=head->next;
          printf("Freeing %d\n",temp->value);
          free(temp);
          temp=head;       
     }
    return 0;
}
