#include<stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main(){
	printf("�����̵�");
	int n;
	int o = 0;
	struct store
	{
		char user[100];
		char password[100];
		float ye;
	};
	struct store a[100] = { 0 };
	struct store manage = { "123456789", "123456789" };
	struct store m2;
	struct store r;
	struct store t;
	struct store rr;
	int nu = 0;
	int c3 = 0;
	int s = 0;
	struct goods{
		int num;
		char name[30];
		float price;
		int quantity;
		int  sale;
	}; struct goods goo[100] = { 0 };
	int c2;
	int yue = 0;
	struct zsj{
		float yye;
		int dds;
	}; struct zsj zong[12] = { 0 };
	while (1){
		printf("��¼�밴1,ע���밴0,�����밴5\n");
		scanf("%d", &n);
		if (n == 0){
			int l = 1;
			while (l){
				printf("�û���;");
				scanf("%s", r.user);
				int j = 101; int o1 = 0;
				while (j--){
					int k = strcmp(r.user, a[o1].user);
					o1++;
					if (!k){
						printf("�û����Ѵ���"); break;
					}
					else{
						l = 0; break;
					}
				}
			}
			printf("����:");
			scanf("%s", &r.password);
			int b = 1; 
			while (b){
				int o2 = 0;
				printf("���ٴ���������;");
				scanf("%s", &t.password);
				int c = strcmp(r.password, t.password);
				b = c;
				if (!c)
				{
					int b9 = 100,b10 = 0;
					while (--b9){
						a[s].user[b10] = r.user[b10]; a[s].password[b10] = r.password[b10]; b10++;
					}
					s++;
					printf("ע��ɹ�\n");
				}
				else{ printf("���벻һ��\n"); o2++; }
			}
		}

		if (n == 1){
			int h = 1;
			while (h){
				o = 0;
				struct store q = { 0 };
				printf("�û���;");
				scanf("%s", &q.user);
				printf("����:");
				scanf("%s", &q.password);
				int d = 101;
				int z = 1;
				struct shopping{
					int num;
					int name;
					float price;
					int many;
					float much;
				}; struct shopping list[100] = { 0 };
				while (d--){
					int f = strcmp(q.password, a[o].password);
					int g = strcmp(q.user, a[o].user);
					o++;
					int a12 = o - 1;
					if (f == 0 && g == 0){
						z = 0; printf("��½�ɹ�\n");
						h = 0;
						int s1 = 0;
						float s3 = 0;
						while (1){
							printf("1.��Ʒ���� 2.�޸����� 3ע���˻� 4.��� 5�˳���¼\n");
							int a9;
							scanf("%d", &a9);
							if (a9 == 1){
								while (1){
									int d5 = 100;
									int d6 = 0;
									while (d5--){
										int e5 = goo[d6].num;
										if (e5){ printf("���:%d ��Ʒ:%s �۸�:%.2f ���:%d\n", goo[d6].num, goo[d6].name, goo[d6].price, goo[d6].quantity); }
										d6++;
									}
									printf("1.���� 2.���� ");
									int d9;
									scanf("%d", &d9);
									if (d9 == 1){
										printf("����Ҫ�������Ʒ���");
										int d7;
										scanf("%d", &d7);
										list[s1].num = d7;
										printf("���빺�������");
										int d8;
										scanf("%d", &d8);
										d7--;
										list[s1].name = d7;
										list[s1].many = d8;
										list[s1].much = goo[d7].price*d8;
										zong[yue].yye += list[s1].much;
										goo[d7].quantity -= d8;
										goo[d7].sale += d8;
										s1++;
									}
									else{
										int fq = s1;
										printf("�����嵥\n���  ����  ����  ����  ��֧��\n");
										while (s1--){
											int s2 = list[s1].name; printf("%d    %s   %2.f    %d    %2.f\n", list[s1].num, goo[s2].name, goo[s2].price, list[s1].many, list[s1].much);
											s3 += list[s1].much;
											break;
										}
										printf("����֧��%2.f\n", s3);
										int zf;
										float ye = 0;
										printf("1�ֻ�֧��,2���֧��,3����֧��");
										scanf("%d", &zf); if (zf == 1){ printf("֧���ɹ�"); zong[yue].dds += 1; }
										if (zf == 2){
											if (a[a12].ye < s3){ printf("����"); }
											else{ printf("֧���ɹ�"); a[12].ye -= s3; zong[yue].dds += 1; }
										}
										if (zf == 3){ while (fq--){ int fq1 = 0; int fq2 = list[fq1].num - 1; goo[fq2].quantity += list[fq1].many; goo[fq2].sale -= list[fq1].many; zong[yue].yye -= list[fq1].much; } }
										break;
									}
									break;
								}
							}if (a9 == 2){
								printf("����������"); char a10[100]; scanf("%s", &a10); int a11 = strcmp(a10, a[a12].password); if (a11){ printf("�������\n"); }
								else{
									printf("������������"); char a13[100] = { 0 }; scanf("%s", &a13); int a14 = 0; int a15 = 100; while (--a15){ a[a12].password[a14] = a13[a14]; a14++; }
								}
							}int a16=0; if (a9 == 3){
								if (a[a12].ye){ printf("�û����%2.f,�Ƿ����ѻ�����\n1.�� 2.��", a[a12].ye); scanf("%d", &a16); }if (a16 == 2||a16==0){ printf("�Ƿ�ȷ��ע���û�\n2.�� 3.��");  scanf("%d", &a16); } if (a16 == 2){ int a18 = 100; int a19 = 0; while (--a18){ a[a12].user[a19] = 0; a[a12].password[a19] = 0; }break; }
							}if (a9 == 4){ printf("���:%2.f 1.��ֵ 2.���� 3.����", a[a12].ye); int a20; scanf("%d", &a20); if (a20 == 1){ printf("�������ֵ���"); float a21; scanf("%f", &a21); a[a12].ye += a21; }if (a20 == 2){ printf("���������ֽ��"); float a22; scanf("%f", &a22); if (a[a12].ye < a22){ printf("����"); } else{ a[a12].ye += a22; } } }

							if (a9 == 5){ break; }
						}
					}
				}if (z){ printf("�û������������\n"); break; }
				
			}
		}
			if (n == 5){
				printf("�������˺�\n");
				scanf("%s", &m2.user);
				printf("����������\n");
				scanf("%s", &m2.password);
				int u1 = strcmp(m2.user, manage.user);
				int p1 = strcmp(m2.password, manage.password);
				if (u1 == 0 && p1 == 0){
					printf("��½�ɹ�\n");
					while (1){
						int i1[100], j1, i2,i4=0;
						for (i2=0; i2 < 100; i2++){ i1[i2] = i2; }//i1[100]={0,1,2,3,...,98,99}

						for (i2=0 ; i2 < 100; i2++){
							for (j1 = 1; j1 < 100 - i2; j1++){
								int j2 = j1 - 1;
								if (goo[i4].sale >goo[j1].sale){
									int tmp = i1[j1]; i1[j1] = i1[j2]; i1[j2] = tmp;
								}
								else{ i4++; }
							}
						}
						int d1 = 100;
						int d2 = 99;
						while (d1--){
						 int d3 = i1[d2]; int i3 = goo[d3].num;
							if (i3){ printf("���:%d ��Ʒ:%s �۸�:%.2f ���:%d ����:%d\n", goo[d3].num, goo[d3].name, goo[d3].price, goo[d3].quantity, goo[d3].sale); }
							d2--;
						}
						printf("1.������Ʒ 2.ɾ����Ʒ 3.���ļ۸� 4.���Ŀ�� 5.���� 6.ɾ���û� 7.�˳�");
						scanf("%d", &c2);
						if (c2 == 1){
							goo[c3].num = ++nu;
							printf("������Ʒ����");
							scanf("%s", &goo[c3].name);
							printf("������Ʒ�۸�");
							scanf("%f", &goo[c3].price);
							printf("������");
							scanf("%d", &goo[c3].quantity);
							printf("��������");
							scanf("%d", &goo[c3].sale);
							c3++;
						};
						if (c2 == 2){
							int c4;
							printf("����Ҫɾ������Ʒ���");
							scanf("%d", &c4);
							c4 -= 1;
							goo[c4].num = 0;
						};
						if (c2 == 3){
							printf("����Ҫ���ļ۸����Ʒ���");
							int c5;
							scanf("%d", &c5);
							c5 -= 1;
							printf("����Ʒ���ڵļ۸���%.2f,������ĵļ۸�", goo[c5].price);
							scanf("%f", &goo[c5].price);
						};
						if (c2 == 4){
							printf("������Ҫ���Ŀ�����Ʒ���");
							int c6;
							scanf("%d", &c6);
							c6 -= 1;
							printf("����Ʒ���ڿ����%d,������ĵĿ��");
							scanf("%d", &goo[c6].quantity);
						}
						if (c2 == 5){
							int bb; printf("���¶���%d,����Ӫҵ��%2.f\n1.���½ᵥ 2�鿴���� 3����", zong[yue].dds, zong[yue].yye);
							scanf("%d", &bb); if (bb == 1){ yue++; }if (bb == 2){ printf("�ϸ��¶���%d,�ϸ���Ӫҵ��%d\n", zong[yue - 1].dds, zong[yue - 1].yye); }if (bb == 3){ continue; }
						}
						if (c2 == 6){ printf("����Ҫɾ�����û���"); scanf("%s", &rr.user);
						int rr1 = 100, rr2; while (rr1--){ int rr3 = strcmp(rr.user, a[rr1].user); if (!rr1){
							if (a[rr1].ye){ printf("�û����%2.f", a[rr1].ye); }
							else{ printf("�Ƿ�ȷ��ɾ�����û�\n1.�� 2.��");  scanf("%d", &rr2);  if (rr2 == 1){ int rr3 = 100; int rr4 = 0; while (--rr3){ a[rr1].user[rr4] = 0; a[rr1].password[rr4] = 0; } }}
						}
						}
						}
						if (c2 == 7){  break; }
					}
				}
				else{ printf("�˺Ż��������\n"); }
			}
		}
	}
