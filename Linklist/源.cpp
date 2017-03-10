#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node, *link;
link CreatLinkList()
{
	link head = NULL, r = NULL;
	int n;
	while (scanf("%d", &n) && n != -1)
	{
		link p = (link)malloc(sizeof(node));
		if (p)
		{
			p->data = n; p->next = NULL;
			if (!head)
				head = p;
			else
				r->next = p;
			r = p;
		}
		else
			return NULL;
	}
	return head;
}
int findmax(link head)
{
	link p = head; int max = p->data;
	while (p)
	{
		max = max > p->data ? max : p->data;
		p = p->next;
	}
	return max;
}
int findmin(link head)
{
	link p = head; int min = p->data;
	while (p)
	{
		min = min < p->data ? min : p->data;
		p = p->next;
	}
	return min;
}
int Sum(link head)
{
	link p = head;
	int sum = 0;
	while (p)
	{
		sum += p->data;
		p = p->next;
	}
	return sum;
}
int main()
{
	link h = CreatLinkList();
	printf("%d %d %d\n", findmax(h), findmin(h), Sum(h));

	system("pause");
	return 0;
}