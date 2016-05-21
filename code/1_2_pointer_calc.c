#include <stdio.h>
/**
 * 指针类型的 运算
 *
 *
 * 对指针加 N， 指针前进 “当前指针指向的类型长度 * N”
 *
 */

int main(int argc, char const *argv[])
{
	int hope ;
	int *p_hope;

	p_hope = &hope;
	// 打印地址
	printf("p_hope before ... %p\n", p_hope);

	// 地址前进 1
	p_hope++;
	printf("p_hope after 1 ... %p\n", p_hope);

	// 地址前进 3
	printf("p_hope after 3 ... %p\n", p_hope+3);

	return 0;
}