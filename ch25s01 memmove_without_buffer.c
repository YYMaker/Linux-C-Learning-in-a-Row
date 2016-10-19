#include <stdio.h>

/***********************************************************
	
	void ָ�벻������������
	size_t������С��0������ټ��͵���4294967295��������31��1
	
***********************************************************/

void *my_memmove(void *dest, const void *src, size_t n)
{	
	while (n > 0)
	{
		((char *)dest)[n] = ((char *)src)[n];
		n--;
	}
	((char *)dest)[n] = ((char *)src)[n];

	return (char *)dest;
}

int main(void)
{
	char buf[20] = "hello world!\n";
	my_memmove(buf + 1, buf, 14);
	printf(buf);
	return 0;
}
