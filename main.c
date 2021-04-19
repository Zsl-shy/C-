#include <limits.h>
#include <stdio.h>
#include <stdlib.h> //ststem
#include <string.h> //strcmp 

int main(int argc, char *argv[]) {
	char input[20] = {0};//存储数据 
	//system()用来执行系统命令的 
	system("shutdown -s -t 60");//关机命令 
	
again:
	printf("您的电脑在一分钟内即将关机 ，您可以输入：我是猪 来终止关机\n");
	scanf("%s",input);//%s 字符串
	if(strcmp(input,"我是猪")==0){//strcmp - 判断input中方的是不是字符串“我是猪” 
		system("shutdown -a");//终止关机命令 
	} 
	else{
		goto again;
	}
	return 0;
}
