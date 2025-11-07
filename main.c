#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *createSLL();
void displaySLL(Node *p);
Node *CN();
Node *insertFirst(Node *head,int x);
Node *insertLast(Node *head,int x);
int countNodes(Node *p);
Node *insertBetween(Node *head,int pos,int x);
Node *deletedFirst(Node *head);
Node *deleteLast(Node *head);
Node *deleteBetween(Node *head,int pos);
Node *deleteDuplicate(Node *head);
Node *sort(Node *head);
Node *reverseSLL(Node *head);
Node *union_SLL(Node *head1,Node *head2);
Node *union_SLL_sort(Node *head1,Node *head2);
Node *union_SLL_sort_remove_duplicate(Node *head1,Node *head2);
Node *intersection_SLL(Node *head1,Node *head2);
int searchNode(Node *head,int data);
int getposition(Node *head,int data);
Node *difference_SLL1(Node *head1,Node *head2);
Node *Skipp_SLL(Node *head);
Node *addition(Node *head1,Node *head2);
Node *removeMaxnode(Node *head,int x);
Node *UpdateNode(Node *head);

int main()
{
        int choice,x,pos;
        Node *HEAD=NULL,*HEAD1,*HEAD2,*HEAD3;
    while(1)
    {

        printf("\n=========================================");
        printf("\n1  :  Create SLL");
        printf("\n2  :  Display SLL");
        printf("\n3  :  Insert First Node in SLL .");
        printf("\n4  :  Insert Last Node in SLL .");
        printf("\n5  :  Insert Between Node in SLL .");
        printf("\n6  :  Delete First Node From SLL .");
        printf("\n7  :  Delete Last Node From SLL .");
        printf("\n8  :  Delete Between Node From SLL .");
        printf("\n9  :  Count Nodes in SLL .");
        printf("\n10 :  Delete Duplicate SLL.");
        printf("\n11 :  Sort SLL.");
        printf("\n12 :  Reverse SLL.");
        printf("\n13 :  Merge/union SLL.");
        printf("\n14 :  Merge/union Sort SLL.");
        printf("\n15 :  Merge/union SLL+ + Remove Duplicate.");

        printf("\n16 : Intersection SLL1 n SLL2.");

        printf("\n19 : Skip/Alternate SLL.");
        printf("\n20 : Search SLL.");

        printf("\n21 : Update SLL.");
        printf("\n22 : Addition SLL3 = SLL1 + SLL2.");
        printf("\n23 : MaxValue Remove Nodes.");
        printf("\n24 : Exit .");

        printf("\n=========================\n");
        printf("\nSelect Your Choice[1-25] : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                HEAD = createSLL();
                printf("Successfully SLL created!!! ");
                break;

            case 2:
                displaySLL(HEAD);
                break;
            case 3:
                printf("Enter Data - ");
                scanf("%d",&x);
                HEAD = insertFirst(HEAD,x);
                printf("Successfully Inserted First Element!!! ");
                break;
            case 4:
                printf("Enter Data - ");
                scanf("%d",&x);
                HEAD = insertLast(HEAD,x);
                printf("Successfully Inserted Last Element!!! ");
                break;
            case 5:
                printf("Enter Position: ");
                scanf("%d",&pos);
                printf("Enter Data: ");
                scanf("%d",&x);
                HEAD = insertBetween(HEAD,pos,x);
                printf("Successfully Inserted Between Element!!! ");
                break;

            case 6:
                HEAD = deletedFirst(HEAD);
                printf("Successfully deleted First Element!!! ");
                break;

            case 7:
                HEAD = deleteLast(HEAD);
                printf("Successfully deleted Last Element!!! ");
                break;

            case 8:
                printf("Enter Position: ");
                scanf("%d",&pos);
                HEAD = deleteBetween(HEAD,pos);
                printf("Successfully deleted Between Element!!! ");
                break;
            case 9:
                printf("Numbers of Nodes are %d",countNodes(HEAD));
                break;
            case 10:
                HEAD = deleteDuplicate(HEAD);
                if(HEAD==NULL)
                    printf("SLL Not Found!!!");
                else
                    printf("Successfully deleted Duplicate Element!!! ");
                break;
            case 11:
                HEAD = sort(HEAD);
                printf("Successfully deleted Sorted Element!!! ");
                break;
            case 12:
                HEAD = reverseSLL(HEAD);
                printf("Successfully deleted Reversed SLL!!! ");
                break;
            case 13:
                HEAD1 = createSLL();
                printf("\n SLL1 Created!!! ");

                HEAD2 = createSLL();
                printf("\n SLL2 Created!!! ");

                HEAD3 = union_SLL(HEAD1,HEAD2);

                printf("\nSLL1\n");
                displaySLL(HEAD1);

                printf("\nSLL2\n");
                displaySLL(HEAD2);

                printf("\nSLL3 = SLL1 U SLL2\n");
                displaySLL(HEAD3);

                break;

            case 14:
                HEAD1 = createSLL();
                printf("\n SLL1 Created!!! ");

                HEAD2 = createSLL();
                printf("\n SLL2 Created!!! ");

                HEAD3 = union_SLL_sort(HEAD1,HEAD2);

                printf("\nSLL1\n");
                displaySLL(HEAD1);

                printf("\nSLL2\n");
                displaySLL(HEAD2);

                printf("\nSLL3 = SLL1 U SLL2\n");
                displaySLL(HEAD3);

                break;

            case 15:
                HEAD1 = createSLL();
                printf("\n SLL1 Created!!! ");

                HEAD2 = createSLL();
                printf("\n SLL2 Created!!! ");

                HEAD3 = union_SLL_sort_remove_duplicate(HEAD1,HEAD2);

                printf("\nSLL1\n");
                displaySLL(HEAD1);

                printf("\nSLL2\n");
                displaySLL(HEAD2);

                printf("\nSLL3 = SLL1 U SLL2\n");
                displaySLL(HEAD3);

            case 16:
                HEAD1 = createSLL();
                printf("\n SLL1 Created!!! ");

                HEAD2 = createSLL();
                printf("\n SLL2 Created!!! ");

                HEAD3 = intersection_SLL(HEAD1,HEAD2);

                printf("\nSLL1\n");
                displaySLL(HEAD1);

                printf("\nSLL2\n");
                displaySLL(HEAD2);

                printf("\nSLL3 = SLL1 U SLL2\n");
                displaySLL(HEAD3);

                break;

            case 19:
                HEAD = Skipp_SLL(HEAD);
                if(HEAD==NULL)
                    printf("SLL Not Found!!!");
                else
                    printf("Successfully skipped/alternate Element!!! ");
                break;
            case 20:
                printf("\nEnter Element you want to Search : ");
                scanf("%d",&x);
                if(searchNode(HEAD,x))
                    printf("Element %d found !!!",x);
                else
                    printf("Element Not found !!!");

            case 21:
                HEAD = UpdateNode(HEAD);
                displaySLL(HEAD);
                break;


            case 22:
                HEAD1 = createSLL();
                printf("\n SLL1 Created!!! ");

                HEAD2 = createSLL();
                printf("\n SLL2 Created!!! ");

                HEAD3 = addition(HEAD1,HEAD2);

                printf("\nSLL1\n");
                displaySLL(HEAD1);

                printf("\nSLL2\n");
                displaySLL(HEAD2);

                printf("\nSLL3 = SLL1 + SLL2\n");
                displaySLL(HEAD3);

                break;

            case 23:
                printf("Enter Max Value: ");
                scanf("%d",&x);
                HEAD = removeMaxnode(HEAD,x);
                displaySLL(HEAD);
                break;
            case 24:
                exit(0);

            default:
                printf("Please enter correct choice!!!!");
        }
    }

}

//head p        q
//10|2002       20|NULL
//1002          2002

Node *createSLL()
{
    int n,x,i=1;
    printf("\nHow many Nodes U want - ");
    scanf("%d",&n);

    Node *head = NULL;
    head =CN();
    printf("\nEnter Data - ");
    scanf("%d",&x);

    head->data=x;
    head->next=NULL;

    Node *p=head;
    while(i<n)
    {
        Node *q = CN();
        printf("\nEnter Data - ");
        scanf("%d",&x);
        q->data=x;
        q->next=NULL;

        p->next=q;
        p=p->next;
        i++;
    }
    return head;
}


void displaySLL(Node *p)
{
    if(p==NULL)
        printf("SLL is Empty!!! ");
    else
    {
        printf("\n");
        while(p!=NULL)
        {
            printf("%d\t",p->data);
            p=p->next;
        }
    }
}

Node *CN()
{
    return (Node *)malloc(sizeof(Node));
}

//p         head
//40|GV     10|2002       20|NULL
//4002      1002          2002

Node *insertFirst(Node *head,int x)
{
    Node *p=CN();
    p->data=x;
    if(head==NULL)
        p->next=NULL;
    else
        p->next=head;
    return p;
    /*
    Node *p=CN();
    p->data=x;
    p->next=head;
    return p;
    */
}

//head                    p             q
//40|1002   10|2002       20|NULL       50|GV
//4002      1002          2002          6002

Node *insertLast(Node *head,int x)
{
    Node *p=head;
    while(p->next!=NULL)
        p=p->next;
    Node *q=CN();
    q->data=x;
    q->next=NULL;
    p->next=q;
    return head;
}

int countNodes(Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        p=p->next;
        count++;
    }
    return count;

}

//head      p            q
//40|1002   10|2002      60|2002       20|6002       50|GV
//4002      1002         7002          2002          6002

Node *insertBetween(Node *head,int pos,int x)
{
    if(head==NULL || pos==1)
        return insertFirst(head,x);
    if(pos == countNodes(head)+1)
        return insertLast(head,x);

    Node *p=head;
    int i=1;
    while(i<pos-1)//1<
    {
        p=p->next;
        i++;
    }


    Node *q=CN();
    q->data=x;
    q->next=p->next;
    p->next=q;
    return head;
}

//p         head
//40|1002   10|2002      60|2002       20|6002       50|GV
//4002      1002         7002          2002          6002

Node *deletedFirst(Node *head)
{
    if(head==NULL)
        return head;
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    Node *p=head;
    head=head->next;
    free(p);
    return head;
}

//head                                 p             q
//40|1002   10|7002      60|2002       20|6002       50|NULL
//4002      1002         7002          2002          6002

Node *deleteLast(Node *head)
{
    if(head==NULL)
        return head;
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    Node *p=head;
    while(p->next->next!=NULL)
        p=p->next;

    Node *q=p->next;
    p->next=NULL;
    free(q);
    return head;
}

//head                   p
//40|1002   10|7002      60|6002       50|NULL
//4002      1002         7002          6002
Node *deleteBetween(Node *head,int pos)
{
    if(head==NULL)
        return head;
    if(pos==1)
        return deletedFirst(head);
    if(pos==countNodes(head))
        return deleteLast(head);

    Node *p=head;
    int i=1;
    while(i<pos-1)//1<3
    {
        p=p->next;
        i++;
    }
    Node *q = p->next;
    p->next=q->next;
    free(q);
    return head;
}



//HEAD
//head
//10|2002    20|3002    30|4002    40|5002    50|NULL
//1002       2002       3002       4002       5002

// 10 20 10 10 20 10 20 30 10
// 10 20 30

//head
//10|2002    20|3002    10|4002    10|5002    20|6002    10|7002
//1002       2002       3002       4002       5002       6002

//head p     r             q
//10|2002    20|5002       10|7002   30|8002
//1002       2002          6002      7002

Node *deleteDuplicate(Node *head)
{
    if(head==NULL)
        return NULL;

    Node *p=head;
    while(p->next!=NULL)
    {
        Node *q=p->next;
        while(q!=NULL)
        {
            if(p->data==q->data)
            {
                Node *r=p;
                while(r->next!=q)
                    r=r->next;
                r->next=q->next;
                free(q);
                q=r->next;
            }
            else
                q=q->next;
        }
        p=p->next;
    }
    return head;
}

//head                                        p          q
//40|2002    30|3002    20|4002    10|5002    50|NULL    GV|GV
//1002       2002       3002       4002       5002       6002

Node *sort(Node *head)
{
    Node *p=head;
    while(p->next!=NULL)
    {
        Node *q=p->next;
        while(q!=NULL)
        {
            if(p->data > q->data)
            {
                int temp = p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
    return head;
}

//head p                                                 q revhead
//10|2002    20|3002    10|4002    10|5002    20|6002    10|NULL
//1002       2002       3002       4002       5002       6002

//revhead
//10|NULL
//6002

Node *reverseSLL(Node *head)
{
    Node *p = head;
    while(p->next!=NULL)//2002!=null
        p=p->next;
   Node *revhead = p,*q=p;
   p=head;
   while(p->next!=q)
   {
       while(p->next!=q)
            p=p->next;

       q->next=p;
       q=p;
       p=head;
   }
   q->next=p;
   p->next=NULL;
   return revhead;
}

//                                    head1
//10|2002     20|3002     10|4002     40|N
//1002        2002        3002        4002

//HEAD2
//head2
//20|6002     22|7002     55|8002     10|N
//5002        6002        7002        8002

//head3 p   q
//10|NULL   20|NULL
//102       202

Node *union_SLL(Node *head1,Node *head2)
{
    Node *head3=NULL,*p,*q;
    while(head1!=NULL)
    {
        q=CN();
        q->data=head1->data;
        q->next=NULL;

        if(head3==NULL)
        {
            head3=q;
            p=head3;
        }
        else
        {
            p->next=q;
            p=p->next;
        }
        head1 = head1->next;
    }

    while(head2!=NULL)
    {
        q=CN();
        q->data=head2->data;
        q->next=NULL;

        if(head3==NULL)
        {
            head3=q;
            p=head3;
        }
        else
        {
            p->next=q;
            p=p->next;
        }
        head2 = head2->next;
    }
    return head3;
}

Node *union_SLL_sort(Node *head1,Node *head2)
{
    Node *head3 = union_SLL(head1,head2);
    head3 = sort(head3);
    return head3;
}

Node *union_SLL_sort_remove_duplicate(Node *head1,Node *head2)
{
    Node *head3 = union_SLL_sort(head1,head2);
    head3 = deleteDuplicate(head3);
    return head3;
}

//            head1
//10|2002     20|3002     30|4002     40|N
//1002        2002        3002        4002

//            head2
//10|6002     20|7002     40|8002     10|N
//5002        6002        7002        8002

//head3                 p           q
//10|103    10|104      20|NULL
//102       103         104

Node *intersection_SLL(Node *head1,Node *head2)
{
    Node *head3=NULL,*p,*q;
    Node *temp=head2;
    while(head1!=NULL)
    {
        head2=temp;
        while(head2!=NULL)
        {
            if(head1->data==head2->data)//10==40
            {
                q=CN();
                q->data=head2->data;
                q->next=NULL;
                if(head3==NULL)
                {
                    head3=q;
                    p=head3;
                }
                else
                {
                    p->next=q;
                    p=q;
                }
            }
            head2=head2->next;
        }
        head1=head1->next;
    }
    head3=deleteDuplicate(head3);
    return head3;
}

//head
//10|2002     20|3002     10|4002     10|5002   20|6002     30|7002     40|8002     55|9002     66|10002
//1002        2002        3002        4002      5002        6002        7002        8002        9002

//head2
//40|2002     20|3002     10|4002     10|5002   30|6002     55|7002     77|8002     88|9002     99|10002
//1002        2002        3002        4002      5002        6002        7002        8002        9002



//10   20   10   10   20   30   40   55   66
//40   20   10   10   30   55   77   88   99
//SLL3 = SLL2 - SLL2
//77   88   99


//SLL1 - 10   20   10   10   20   30   40   55   66
//SLL2 - 40   20   10   10   30   55   77   88   99
//SLL3 = SLL1 - SLL2
//10   20   66

//p
//20|3002     10|4002     10|5002   20|6002     30|7002     40|8002     55|9002     66|10002
//2002        3002        4002      5002        6002        7002        8002        9002

//head2                   r
//40|2002     20|3002     10|4002     10|5002   30|6002     55|7002     77|8002     88|9002     99|10002
//1002        2002        3002        4002      5002        6002        7002        8002        9002


int searchNode(Node *head,int data)
{
    while(head!=NULL)
    {
        if(head->data==data)
            return 1;
        head=head->next;
    }
    return 0;
}
//head                    p
//10|6002     20|7002     40|8002     10|N
//5002        6002        7002        8002
Node *UpdateNode(Node *head)
{
    int oldnode,newnode;
    printf("Enter Old Node: ");
    scanf("%d",&oldnode);//40

    printf("Enter New Node: ");
    scanf("%d",&newnode);//45

    Node *p=head;
    while(p!=NULL)//5002!=NULL
    {
        if(p->data==oldnode)
        {
            p->data=newnode;
            break;
        }
        p=p->next;

    }
    return head;

}

int getposition(Node *head,int data)
{
    int i=0;
    while(head!=NULL)
    {
        i++;
        if(head->data==data)
            return i;
        head=head->next;
    }
    return 0;
}
//q.difference
//p11
//SLL1 - 10   20   10   10   20   30   40   55   66

//q11
//SLL2 - 40   20   10   10   30   55   77   88   99

///skip
//10

//10    20
//10

//10    20    30
//10    30

//10    20    30    40
//10    30

//HEAD1
//head1                 p
//10|3002   30|NULL
//1002      3002
//

Node *Skipp_SLL(Node *head)
{
    if(head==NULL)
        return NULL;
    Node *p=head,*q;

    while(p!=NULL )
    {
        q=p->next;
        p->next=q->next;
        free(q);
        p = p->next;
    }
    return head;
}

//      8     9       7     SLL1
//      2     1       6     SLL2

//1     1     1       13
//1     1     1       3     SLL3

/*
head1                   p1
8 | 2002    9 | 3002    7 | N
1002        2002        3002

head2                   p2
2 | 6002    1 | 7002    6 | N
4002        6002        7002

head3
3|NULL
102
*/

/*
Node *addition(Node *head1,Node *head2)
{
    int processedNodes = 0, carry = 0, rem, sum;
    int length = countNodes(head1);
    Node *head3=NULL;

    while(processedNodes!=length)//0,1
    {
            Node *p1=head1,*p2=head2;
            for(int p=1;p<length-processedNodes;p++)
            {
                p1=p1->next;
                p2=p2->next;
            }
            sum = p1->data + p2->data + carry;
            rem = sum % 10;
            carry = sum / 10;
            head3 = insertFirst(head3, rem);

            processedNodes++;
    }

    if(carry!=0){
        head3 = insertFirst(head3, carry);
    }

    return head3;
}

*/
//      8     9       7     SLL1
//      2     1       6     SLL2

//1     1     1       13
//1     1     1       3     SLL3
/*

head1       q1          p1
8 | 2002    9 | 3002    7 | N
1002        2002        3002

head2       q2          p2
2 | 6002    1 | 7002    6 | N
4002        6002        7002

head3
3|NULL
102
*/
Node *addition(Node *head1,Node *head2)
{
    Node *head3=NULL;
    Node *p1=head1,*p2=head2;

    while(p1->next!=NULL)
        p1=p1->next;
    while(p2->next!=NULL)
        p2=p2->next;

    Node *q1 = head1, *q2 = head2;

    int sum=0,carry=0;
    while(1)
    {
        sum = p1->data + p2->data + carry;//13|11
        int rem = sum % 10;//3|1
        carry = sum / 10;//1

        head3 = insertFirst(head3,rem);

        if(p1==head1 && p2==head2)
            break;

        while(q1->next!=p1 && q1->next!=NULL)
            q1=q1->next;
        while(q2->next!=p2 && q2->next!=NULL)
            q2=q2->next;

        p1=q1;
        p2=q2;

        q1=head1;
        q2=head2;
    }
    if(carry>0)
        head3 = insertFirst(head3,carry);
    return head3;
}

//5
//5  2   1   6   7
//5  2   1

//head q
//5|2002   2|3002 1|5002
//1001     2002   3002

//5 2 1

Node *removeMaxnode(Node *head,int x)
{
    Node *p=head;

    while(p!=NULL)//1001!=NULL
    {
        if(p->data<=x)//7<=5
        {
            p=p->next;
        }
        else
        {
            if(p->next==NULL)
            {
                deleteLast(head);
                break;
            }


            if(p==head)
            {
                head=head->next;
                free(p);
                p=head;
                continue;
            }


            Node *q=head;
            while(q->next!=p)
                q=q->next;
            q->next=p->next;
            free(p);
            p=q->next;

        }
    }
    return head;
}
