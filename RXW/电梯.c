int main()
{
	int num;
	printf("请输入楼层");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("1楼到了！\n");
		case 2:printf("2楼到了！\n");
		case 3:printf("3楼到了！\n");
		case 4:printf("4楼到了！\n");
		case 5:printf("5楼到了！\n");
		case 6:printf("6楼到了！\n");
		case 7:printf("7楼到了！\n");
		case 8:printf("8楼到了！\n");
		case 9:printf("9楼到了！\n"); break;
		default:printf("输入错误!\n");
		}
		return 0;
}
