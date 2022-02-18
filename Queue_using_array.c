#include<stdio.h>
int queue[30],choice,x,n;
void enque();
void deque();
void display();
int front = -1,rear = -1;
int main(int argc, char const *argv[])
{
	printf("Enter the size of queue: ");
	scanf("%d",&n);
	printf("\nOperations are---\n");
	while(choice!=4){
		printf("\n 1.enque\n2.deque\n3.display\n 4.exit \n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				enque();
				break;
			}
			case 2:{
				deque();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				printf("\nU r exit\n");
				break;
			}
			default:
			{
				printf("Enter correct choice...\n");
			}
		}
	}
	return 0;
}

void enque(){
	int item;
	if(rear>=n-1){
		printf("Overflow");
	}
	else{
		printf("Enter the value: ");
		scanf("%d",&x);
		rear++;
		queue[rear]=x;
		printf("Value inserted");
	}
	printf("\n");
}

void deque(){
	int item;
	if(rear==-1||front>rear){
		printf("\n UnderFlow \n");
	}
	else {
		item = queue[front];
		if(front == rear){
			front= -1;
			rear = -1;
		}
		else{
			front=front+1;
		}
		printf("Element to be poped\n");
	}
}

void display(){
	if(rear == -1){
		printf("\nQueue is empty\n");
	}
	else{
		printf("\nElements are---\n");
		for (int i = front; i <= rear; i++)
		{
			printf(" %d ",queue[i]);
		}
	}
}
