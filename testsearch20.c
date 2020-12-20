#include "search.h"

//哈希查找
int main() {
	HashTable HashTable;
	InitHashTable(HashTable);
	int a[10] = {4, 5, 6, 4, 8, 14, 10 , 23, 12, 16};
	for (int i=0; i<10; ++i) {
		InsertHashTable(HashTable, a[i]);
	}
	printf("待查找数据为: \n");
	for (int i=0; i<10; i++) {
		printf("%4d", a[i]);
	}
	printf("\n请输入要查找的元素的值: ");
	DataType locatm;
	scanf("%d", &locatm);
	int addr;
	if (!SearchHashTable(HashTable, locatm, &addr))
	printf("这些数中没有你要查找的数\n");
	else
	printf("这些数中有你要查找的数，元素索引位置为:%d", addr);


//二叉树查找
 
	PNode root = NULL;
	DataType nodeArray[11] = {15,6,18,3,7,17,20,2,4,13,9} ;
	printf("待查找数据为：\n");
	for (int i=0;i<11;i++)
	printf("%4d",nodeArray[i]);
	create(&root,nodeArray,11);
	printf("\n请输入要查找的元素的值:");
	
	DataType locate;
	scanf("%d",&locate);
	if(search(root,locate) != NULL)
	printf("这些数中有你要查找的数%d\n",search(root,locate)->key);
	else
	printf("这些数中没有你要查找的数\n");


//折半查找


	int b[N];
	srand(time(0));
	
	for (int i=0; i<N; i++)
	   a[i] = rand() % 100;
	   
	SelectSort(a, N);
	printf("排序后数据为： \n");
	for (int i=0; i<N; i++) printf("%d  ", a[i]);
	printf("\n");
	printf("请输入要查找的元素的值，查找结束按Ctrl+Z。 \n");
	
	int x;
	while(~scanf("%d", &x)) {
		int t = BinarySearch(a, N, x);
		//int t = BinarySeacher2(a, N, x);
		if(t == -1)
		   printf("没有你要找的数据！\n");
		else
		   printf("你要找的数据在第%d的位置\n", t+1);
	}
}

