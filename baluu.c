#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_SIZE 10
int stack[MAX_SIZE], top = -1;
bool isempty(){
	return top==-1;
}
void push(int item){
	if(top==MAX_SIZE-1)
	printf("stack overflow\n");
	else
	stack[++top]=item;
}
int pop(){
	if(isempty()){
		printf("stack underflow\n");
		return-1;
	}else{
		return stack[top--];
	}
}
int peek(){
	if(isempty()){
		printf("stack is empty\n");
		return-1;
	}else{
		return stack[top];
	}
}
void show(){
	int i;
	for (i=top;i>=0;i--);
	printf("%d\n",stack[i]);
}
int main(){
	int ch,data;
	do{
		printf("\n1.push\n2.pop\n3.peek\n4.show\n5.exit\n enter choice:");
		scanf("%^d",&ch);
		switch(ch){
		case 1:
			printf("enter data:");
			scanf("%d", &data);
			push(data);
			break;
			case 2:
				printf("popped: %d\n", pop());
				break;
				case 3:
					printf("top:&d\n", peek());
					break;
					case 4:
						show();
						break;
						case 5:
						break;
						default:
						printf("Invalid chosice\n");
		}
	}
	while (ch!=5);
	return 0;
}
