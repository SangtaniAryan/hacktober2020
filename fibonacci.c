#include<stdio.h> //header files included in code

#include<unistd.h> //Universal standard header files
 #include<sys/types.h> //system types header files inc
 void childprocess(unsigned long long int k) //void with integer return type 
 {
 	int v; // integer variable v created 
 	int a=0; // another variable a with integer data type created
 	int b=1; // same as variable a
 	for (int j=0;j<k;j++){ //for loop used with integer variable j created with condotion 
 		if (j<=1){ //if condition applied 
 			v=j; //condition applied 
 		}
 		else{ //in else part of the code not applicable condition applied
 			v=a+b; //v variable contains a plus b sum
 			a=b; // then variable a equals to variable b 
 			b=v; // again then b variable equally matched to main starting variable v 
 		}
 		printf("%d ",v); //printed variable v 
 	}
 	printf("\n"); //print new line empty blank line
 }

 	
 void main(void) 
 {
 	pid_t pid;
 	unsigned long long int i; //long integer used
 	scanf("%lld",&i); //scanning the variable i
 	pid=fork();
 	//t=getpid();
 	if (pid==0){ //if condition applied
 		printf("Child process is calling Fibonacci\n"); //title printed for output results if .. if condition is true
 		childprocess(i);
 		printf("Child process has ended\n"); //output statment if .. if condition is true 
 	}
 	else{ //else part of the code
 		printf("This is parent process\n Parent process has ended\n"); //statement will print if .. if condition is false
 	
 	}
 }
 	
