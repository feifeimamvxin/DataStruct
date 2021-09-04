//调试如下程序，理解顺序(数组)存储，物理顺序和逻辑顺序相同并且连续。
#include <stdio.h>
struct xs {
	int data;
	struct xs *nect;


};
void main() {
	int i;
	struct xs s[10], *p = NULL;
	for (i = 0; i <= 9; i++)
		s[i].data = i * i;
	p = s;
	for (i = 0; i <= 9; i++) {
		printf("%d %x\n", p->data, p);
		p++;


	}

}
