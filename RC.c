#include<stdio.h>
//RC算法
int main()
{
	char M[18] = {"ShenzhenUniversity"};
	//密钥调度算法KSA
	int S[18],k[18],C[18];//明文长度18
	char K[18] = { "abcde" };
	int i = 0, j = 0;
	for (i = 0; i < 18; i++)
	{
		S[i] = i;
		K[i] = K[i % 5];
	}
	for (i = 0; i < 18; i++){
		j = (i + S[i] + K[i]) % 18;
		int temp = S[i];
		S[i] = S[j];
		S[j] = temp;
	}
	//伪随机生成算法
	for (i = 1, j = 0; i < 19;i++ )
	{
		j = (j+S[i%18]) % 18;
		int temp = S[i%18];
		S[i%18] = S[j];
		S[j] = temp;
		int t = (S[i%18] + S[j]) % 18;
		k[i-1]= S[t];
		C[i-1] = k[i-1] ^ M[i-1];
		printf("%c",C[i-1]);//输出密文
	}
	printf("\n");
	//验证
	for (i = 0; i < 18; i++)printf("%c", k[i]^C[i]);
	printf("\n");//输出明文
	return 0;
}
//Chnj~jcn]oy{ hqvcep
//ShenzhenUniversity
//请按任意键继续. . .
