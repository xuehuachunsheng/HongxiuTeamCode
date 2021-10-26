#include<stdio.h>

int a=123456,p=123456,account,password;
int num;
float Money=10000.0;
float c,q;


int cha_xun() {
	printf("你的余额为：%.2f元.\n",Money);
	if(Money<200000.0)
		printf("您当前的余额不足20w，这将会影响您下个月一次性付清的购车计划哦o'_'o"
		       "少年还需努力！ L'_'L 加油！！！\n");
	return 0;
}

int cun() {
	printf("请输入你要存入的金额：");
	scanf("%f",&c);

	if(c<0)
		printf("不对哟，你输入负数金额难不成要我给你钱呀! *_*\n");
	else {
		if(c>5000)
			printf("根据柜台那边的信息，你月薪只有3000，哪里来的这么多钱来存储呀 >_<");
		else {
			Money+=c;

			printf("你已成功存入%.2f元现金。^_^\n",c);
			printf("当前余额为%.2f元。\n",Money);

		}
	}


	return 0;
}

int qu() {
	printf("请输入你要取出的金额：");
	scanf("%f",&q);

	if(q>Money)
		printf("不好意思哟，你的账户里还没有这么多钱\n");
	else {
		Money-=q;

		printf("请清点一下钞票数量是否正确（钞票不足概不负责）:)\n");
		printf("你的账户当前余额为：%.2f元.\n",Money);
	}

	if(Money<10000.0) {
		printf("你的账户当前余额过低，要及时充值哟！");
		printf("从现在起，如果逾期三天还未充值超过5000元，本行将对你的账户进行冻结处理:)\n"
		       "封号在所难免，我们会对你宏远的购车计划负责的！~#_#~\n");
	}


	return 0;
}

int tuichu() {
	char k;
	printf("什么？你想退出？你的账户才这么点钱你就想退出？\n\n\n");
	printf("你真的你想退出吗？\n");
	printf("(Y...是的/N...再想想，我再考虑充点钱进去)");
	scanf("%s",&k);
	if(k=='Y') {
		printf("欸，不得，我就不让你退出，略略略·- ·");
		printf("有本事你再按Y试试，看我让不让你退出·- ·");
		scanf("%s",&k);
		if(k=='Y') {
			printf("欸，真乖:)");


		} else {
			printf("啊，你居然不听我的，小坏蛋！");


		}
	} else {
		printf("嗯对！再充点钱进去，万一就能退出了呢·- ·\n");

		printf("骗你的·- ·你还真信啦^ = ^\n");


	}
	return 0;
}
int main() {
there:
	;
	printf("请输入你的账户：");
	scanf("%d",&account);
	printf("请输入你的密码：");//只要数字正确即使是在后边加上几个字母也能进去 
	scanf("%d",&password);
	if(account==a&&password==p) {
		printf("1,查询账户余额\n"
		       "2,存款\n"
		       "3,取款\n"
		       "0,退出\n");

		printf("请选择你要办理的业务（输入对应序号）：");
		scanf("%d",&num);

		while(num>0) {
			switch(num) {
				case	1 :
					cha_xun();
					break;
				case	2 :
					cun();
					break;
				case	3 :
					qu();
					break;
				default   :

					break;
			}
			printf("请选择你要办理的业务（输入对应序号）：");
			scanf("%d",&num);
		}
	} else {
		printf("哎呀>_<账户或密码错误！\n");
		
		goto there;
	}
	tuichu();


	return(0);
}


