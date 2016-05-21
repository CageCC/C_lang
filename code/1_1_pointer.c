#include <stdio.h>
/**	
 * 指针类型
 *
 */

int main(int argc, char const *argv[])
{
	int hoge = 5;
	int piyo = 10;

	// 指针类型
	int *p_hoge ;

	// 输出每个变量的地址
	printf("&hoge ... %p\n", &hoge);
	printf("&piyo ... %p\n", &piyo);
	printf("&p_hoge ... %p\n", &p_hoge);


	// 将 hoge的地址赋值 p_hoge
	p_hoge = &hoge;
	printf("p_hoge ... %p\n", p_hoge);

	// 打印hoge值
	printf("*p_hoge before... %d\n", *p_hoge);

	// 修改hoge的值
	*p_hoge = 10;
	printf("hoge after... %d\n", hoge);

	
	return 0;
}