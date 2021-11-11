#include<stdio.h>
#include<Windows.h>
int main()
{
	int i = 100;
	char a[100];
	scanf("%s",&a);
	HWND h = FindWindow(NULL, a);
	while (i)
	{
		SendMessage(h, WM_PASTE, 0, 0);
		SendMessage(h, WM_KEYDOWN, VK_RETURN, 0);
		i--;
	}
	return 0;
}
