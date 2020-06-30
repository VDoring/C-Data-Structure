//107p, 108p. 109p
#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data; //�����͸� ���� ����
	struct _node *next; //������ ����
} Node;

int main()
{
	Node *head = NULL; //����Ʈ�� �Ӹ��� ����Ű�� ������ ����. (������ ����Ų��)
	Node *tail = NULL; //����Ʈ�� ������ ����Ű�� ������ ����. (���� ����Ų��)
	Node *cur = NULL; //����� �������� ��ȸ�� ���Ǵ� ������ ����

	Node *newNode = NULL;
	int readData;

	// �����͸� �Է� �޴� ���� ///////
	while (1)
	{
		printf("�ڿ��� �Է�: ");
		scanf("%d", &readData);
		if (readData < 1)
			break;

		// ����� �߰�����
		newNode = (Node*)malloc(sizeof(Node)); //����� ���� (�ٱ����� ����)
		newNode->data = readData; //��忡 ������ ����
		newNode->next = NULL; //����� next�� NULL�� �ʱ�ȭ

		if (head == NULL) //ù ��° �����! 
			head = newNode; //ù ��° ��带 head�� ����Ű�� ��
		else //�ι�? ���� �����!
			tail->next = newNode;

		tail = newNode; //����� ���� tail�� ����Ű�� ��
	}
	printf("\n");

	// �Է� ���� �������� ��°��� ///////
	printf("�Է� ���� �������� ��ü���! \n");
	if (head == NULL)
	{
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else
	{
		cur = head; //cur�� ����Ʈ�� ù ��° ��带 ����Ų��
		printf("%d ", cur->data); //ù ��° ������ ���

		while (cur->next != NULL) //����� ��尡 �����Ѵٸ�
		{
			cur = cur->next; //cur�� ���� ��带 ����Ű�� �Ѵ�
			printf("%d ", cur->data); //cur�� ����Ű�� ��带 ����Ѵ�
		}
	}
	printf("\n\n");

	// �޸��� �������� ///////
	if (head == NULL)
	{
		return 0; // ����(����)�� ��尡 �������� �ʴ´�.
	}
	else
	{
		Node *delNode = head;
		Node *delNextNode = head->next;

		printf("%d��(��) �����մϴ�. \n", head->data);
		free(delNode); //ù ��° ��� ����

		while (delNextNode != NULL) //�� ��° ���� ��� ����
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d��(��) �����մϴ�. \n", delNode->data);
			free(delNode);
		}
	}

	return 0;
}