#include<stdio.h> //header files included 
#include<stdlib.h> //another header files imported 
void main(){ //return type set for the code
    int b[30],wait[30],turn_t[30],m,quanta,p_t[30],r_t=0,burst[30]; //different variable with integer data type created with manually selected size 
    char *p[30]; //p with size 30 of charcter datatype created 
    printf("Enter the number of processes : "); //output code lines 
    scanf("%d",&m); // printed code for output 

    for(int i=0;i<m;i++){ //for loop used with i integer datatype 
        printf("\nEnter the name of process : "); //output code
        p[i]=malloc(5*sizeof(char));
        scanf("%s",p[i]);
        printf("Enter the burst time of process : "); //output lines with input command 
        scanf("%d",&burst[i]);
        //printf("%s",p[i]);
        
    }
    for(int i=0;i<m;i++){ //for loop used here with condition 

        b[i]=burst[i]; //code applied in for loop
    }
    printf("\nEnter time quanta : "); //statement to enter time quanta 
    scanf("%d",&quanta); //user value accept here 
    wait[0]=0; //condition 
    
    turn_t[0]=b[0]; //condition 
    while(1){ //for while loop used 
    int f=0;
    for(int i=0;i<m;i++){ //condition applied in for loop
        if(b[i]>0){ //if condition used
            f=1; 
        if(b[i]>quanta){ //if code continues 
            r_t=r_t+quanta;
            b[i]-=quanta;
        }
        else{ //else part of code 
            r_t=r_t+b[i]; 
            wait[i]=r_t-burst[i]; //else part condition 
            b[i]=0;
        }
        

    }
    }
     
    if(f==0) // if results are opposite the  exit ...
    break;
    }
    for(int i=0;i<m;i++){ //for loop with condition 
        turn_t[i]=wait[i]+burst[i];
    }
    int s_wait=0,s_turn=0;
    for(int i=0;i<m;i++){ // for loop with condition
        s_wait+=wait[i];
        s_turn+=turn_t[i];
    }
    float avg_wait=(float)s_wait/m;
    float avg_turn=(float)s_turn/m;
    printf("\nJOB\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(int i=0;i<m;i++){ // for loop with condition to created round robin 
        printf("%s\t\t%d\t\t%d\t\t%d\t\t\n",p[i],burst[i],wait[i],turn_t[i]);
    }
    printf("\nAverage waiting time is %f.",avg_wait); //printing output part lf code
    printf("\nAverage turn-around time is %f.\n",avg_turn); //printing output part of code
}
