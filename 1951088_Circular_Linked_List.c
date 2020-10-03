#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
}c_queue;

int insertq(int);
int deleteq();
int display();

c_queue *front, *rear;

int main()
{
    int n, ch;

    do
    {
        printf("\nEnter your choice\n");
        printf("\n1. Insert a new element");
        printf("\n2. Delete an element");
        printf("\n3. Display the queue");
        printf("\n4. Exit\n");

        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insertq(n);
                break;

            case 2:
                deleteq();
                break;

            case 3:
                display();
                break;

            default:
                if(ch != 4)
                    printf("Wrong Choice");

        }

    }while (ch != 4);

    printf("\nThank You!");

    return 0;
}


int insertq(int item)
{
    c_queue *temp;

    temp = (c_queue*)malloc(sizeof(c_queue));
    temp->data = item;
    temp->next = NULL;

    if (rear == NULL)
    {
        front = temp;
        rear = front;
        front->next = rear;
    }

    else
    {
        temp->next = front;
        rear->next = temp;
        rear = rear->next;
    }

    return 0;
}

int display()
{
    c_queue *temp = front;

    if(temp == NULL)
    {
        printf("Queue is empty\n");
        return 0;

    }
    else
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }while(temp != rear->next);

    }

    return 0;
}


int deleteq()
{
    if (front == NULL)
    {
        printf("Queue is empty ");
    }

    else if(front == rear)
    {
        front = NULL;
        rear = NULL;
    }

    else
    {
        front = front->next;
        rear->next = front;
    }

    return 0;
}
